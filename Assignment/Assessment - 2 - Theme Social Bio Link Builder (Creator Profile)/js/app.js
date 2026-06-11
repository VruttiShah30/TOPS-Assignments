import { getLinks,saveLinks } from "./storage.js";
import { validateURL } from "./validation.js";
import { renderLinks } from "./render.js";
import { initializeTheme } from "./theme.js";

const form = document.getElementById("linkForm");
const titleInput = document.getElementById("title");
const urlInput = document.getElementById("url");
const errorMessage = document.getElementById( "errorMessage");
const linksContainer = document.getElementById( "linksContainer" );
const themeButton = document.getElementById( "themeToggle" );

let links = getLinks();

function updateLinks() {
  renderLinks( links, linksContainer, updateLinks);
}

// Initial Render
updateLinks();

// Initialize Theme
initializeTheme(themeButton);

// Form Submit
form.addEventListener(
  "submit",
  (e) => {
    e.preventDefault();

    const title = titleInput.value.trim();
    const url = urlInput.value.trim();

    // Validation
    if (!title || !url) {
      errorMessage.textContent = "Please fill all fields";
      return;
    }

    if (!validateURL(url)) {
      errorMessage.textContent = "URL must start with https://";
      return;
    }

    errorMessage.textContent = "";

    const linkObject = { title, url };

    links.push(linkObject);

    saveLinks(links);

    updateLinks();

    form.reset();
  }
);