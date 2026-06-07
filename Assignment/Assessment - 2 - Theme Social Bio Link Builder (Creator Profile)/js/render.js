import { saveLinks } from "./storage.js";

export function renderLinks(links,linksContainer,updateLinks) {
    linksContainer.innerHTML = "";

  if (links.length === 0) {
    linksContainer.innerHTML =
      "<p>No links added yet.</p>";
    return;
  }

  links.forEach((link, index) => {
    const card = document.createElement("div");

    card.className = "link-card";

    card.innerHTML = `
        <a href="${link.url}" target="_blank" class="link-btn">${link.title}</a>
        <button class="remove-btn" data-index="${index}">Remove</button>
    `;
      linksContainer.appendChild(card);
  });

  // Event Delegation
  linksContainer.addEventListener("click", (e) => {
    if (e.target.classList.contains("remove-btn")) {
      const index =
        e.target.getAttribute("data-index");

      links.splice(index, 1);

      saveLinks(links);

      updateLinks();
    }
  });
}