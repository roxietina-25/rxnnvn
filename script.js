let menu = document.querySelector('#menu-icon');
let navbar = document.querySelector('.navbar');

menu.onclick = ( ) => {
    menu.classList.toggle('bx-x');
    navbar.classList.toggle('active');
}

window.onscroll = ( ) => {
    menu.classList.remove('bx-x');
    navbar.classList.remove('active');
}

const typed = new Typed('.multiple-text', {
    strings: ['<i>Web Developer.</i>', '<i>Software Developer.</i>','<i>Computer Engineering Student.</i>'],
    typeSpeed: 70,
    backSpeed: 70,
    backDelay: 900,
    loop: true,
  });
