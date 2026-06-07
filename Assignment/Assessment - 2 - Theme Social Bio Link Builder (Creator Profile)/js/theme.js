import {
  saveTheme,
  getTheme
} from "./storage.js";

export function initializeTheme(
  themeButton
) {
  const savedTheme = getTheme();

  if (savedTheme === "dark") {
    document.body.classList.add(
      "dark-mode"
    );

    themeButton.innerHTML =
      "☀ Light Mode";
  }

  themeButton.addEventListener(
    "click",
    () => {
      document.body.classList.toggle(
        "dark-mode"
      );

      const isDark =
        document.body.classList.contains(
          "dark-mode"
        );

      if (isDark) {
        saveTheme("dark");

        themeButton.innerHTML =
          "☀ Light Mode";
      } else {
        saveTheme("light");

        themeButton.innerHTML =
          "🌙 Dark Mode";
      }
    }
  );
}