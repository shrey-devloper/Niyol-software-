<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>Niyol Software</title>

    <!-- SEO -->
    <meta name="description" content="Niyol Software – beginner-friendly software, web development, and learning projects in Nepal.">
    <meta name="keywords" content="Niyol Software, Web Development, Software Company Nepal, Student Developers">

    <!-- Google Font -->
    <link href="https://fonts.googleapis.com/css2?family=Poppins:wght@300;400;600&display=swap" rel="stylesheet">

    <style>
        * {
            box-sizing: border-box;
        }

        html {
            scroll-behavior: smooth;
        }

        body {
            margin: 0;
            font-family: 'Poppins', Arial, sans-serif;
            background-color: #0b0b0b;
            color: white;
        }

        /* ===== HEADER ===== */
        header {
            background: linear-gradient(90deg, #111, #222);
            padding: 40px;
            text-align: center;
            animation: fadeDown 1.2s ease;
        }

        header h1 {
            font-size: 42px;
            margin: 0;
            color: #00ffcc;
        }

        .tagline {
            margin-top: 10px;
            font-size: 18px;
            white-space: nowrap;
            overflow: hidden;
            animation: slide 12s linear infinite;
        }

        @keyframes slide {
            from { transform: translateX(100%); }
            to { transform: translateX(-100%); }
        }

        @keyframes fadeDown {
            from { opacity: 0; transform: translateY(-30px); }
            to { opacity: 1; transform: translateY(0); }
        }

        /* ===== NAV ===== */
        nav {
            background-color: #111;
            padding: 12px;
            text-align: center;
            position: sticky;
            top: 0;
            z-index: 100;
        }

        nav a {
            color: white;
            margin: 15px;
            text-decoration: none;
            font-weight: bold;
            transition: 0.3s;
        }

        nav a:hover {
            color: #00ffcc;
        }

        /* ===== SECTIONS ===== */
        section {
            padding: 60px 40px;
            max-width: 1000px;
            margin: auto;
            opacity: 0;
            transform: translateY(40px);
            transition: 1s ease;
        }

        section.show {
            opacity: 1;
            transform: translateY(0);
        }

        h2 {
            color: #00ffcc;
            border-bottom: 2px solid #00ffcc;
            display: inline-block;
            padding-bottom: 5px;
        }

        /* ===== CARDS ===== */
        .card-container {
            display: flex;
            flex-wrap: wrap;
            gap: 20px;
            margin-top: 25px;
        }

        .card {
            background-color: #1a1a1a;
            padding: 20px;
            border-radius: 12px;
            width: 280px;
            transition: 0.4s;
            position: relative;
            overflow: hidden;
            text-align: center;
        }

        .card::before {
            content: "";
            position: absolute;
            inset: 0;
            background: linear-gradient(120deg, transparent, #00ffcc33, transparent);
            transform: translateX(-100%);
            transition: 0.6s;
        }

        .card:hover::before {
            transform: translateX(100%);
        }

        .card:hover {
            transform: scale(1.05);
            box-shadow: 0 0 20px #00ffcc;
        }

        /* ===== TEAM ===== */
        .team-card:hover {
            border: 1px solid #00ffcc;
        }

        /* ===== BUTTON ===== */
        .btn {
            display: inline-block;
            margin-top: 20px;
            padding: 12px 24px;
            background-color: #00ffcc;
            color: black;
            text-decoration: none;
            border-radius: 6px;
            font-weight: bold;
            animation: pulse 2s infinite;
        }

        @keyframes pulse {
            0% { box-shadow: 0 0 0 #00ffcc; }
            50% { box-shadow: 0 0 20px #00ffcc; }
            100% { box-shadow: 0 0 0 #00ffcc; }
        }

        .btn:hover {
            background-color: white;
        }

        /* ===== FOOTER ===== */
        footer {
            background-color: #111;
            text-align: center;
            padding: 25px;
            margin-top: 40px;
            font-size: 14px;
            color: #aaa;
        }

        /* ===== RESPONSIVE ===== */
        @media (max-width: 768px) {
            .card-container {
                justify-content: center;
            }

            header h1 {
                font-size: 30px;
            }

            section {
                padding: 40px 20px;
            }

            .tagline {
                font-size: 14px;
                animation-duration: 16s;
            }
        }
    </style>
</head>

<body>

<header>
    <h1>Niyol Software</h1>
    <div class="tagline">Building simple, powerful & beginner-friendly software 🚀</div>
</header>

<nav>
    <a href="#about" aria-label="About Niyol Software">About</a>
    <a href="#services" aria-label="Services">Services</a>
    <a href="#tech" aria-label="Technologies">Technologies</a>
    <a href="#team" aria-label="Our Team">Team</a>
    <a href="#join" aria-label="Join Niyol Software">Join</a>
</nav>

<section id="about">
    <h2>About Us</h2>
    <p>
        Niyol Software was founded by Niyon Gurung with a vision to create
        simple, powerful, and accessible software. We believe technology
        should empower everyone, especially beginners and students.
    </p>
</section>

<section id="services">
    <h2>Our Services</h2>
    <div class="card-container">
        <div class="card">🌐 Website Design & Development</div>
        <div class="card">💻 Software Development</div>
        <div class="card">📘 Beginner Learning Projects</div>
        <div class="card">🛠️ Technical Support</div>
        <div class="card">🤖 Machine Learning</div>
        <div class="card">🎨 Creative Editing</div>
    </div>
</section>

<section id="tech">
    <h2>Technologies We Use</h2>
    <div class="card-container">
        <div class="card">🧱 HTML & CSS</div>
        <div class="card">🐍 Python</div>
        <div class="card">⚙️ C / C++</div>
        <div class="card">🚀 Future Technologies</div>
    </div>
</section>

<section id="team">
    <h2>Our Team</h2>
    <div class="card-container">
        <div class="card team-card">
            <h3>Niyon Gurung</h3>
            <p>Founder & CEO</p>
        </div>
        <div class="card team-card">
            <h3>Shreyash Baral</h3>
            <p>Head Web Developer</p>
        </div>
        <div class="card team-card">
            <h3>Susuhang Rai</h3>
            <p>Python Developer</p>
        </div>
        <div class="card team-card">
            <h3>Sabin Rai</h3>
            <p>Creative Designer</p>
        </div>
        <div class="card team-card">
            <h3>Rupahang Rai</h3>
            <p>Strategist & Marketing Expert</p>
        </div>
        <div class="card team-card">
            <h3>Sanskar Shah</h3>
            <p>Business Partner</p>
        </div>
    </div>
</section>

<section id="join">
    <h2>Join Us</h2>
    <p>
        Are you a student or learner? Join Niyol Software and grow with us.
        Together, we build skills, confidence, and a better digital future.
    </p>
    <a href="mailto:niyolsoftware@gmail.com" class="btn">Contact Us</a>
</section>

<footer id="footer">
    © 2025 Niyol Software | Dharan-15, Nepal <br>
    Email: niyolsoftware@gmail.com | Phone: +977-9767156948
</footer>

<script>
    const sections = document.querySelectorAll("section");

    window.addEventListener("scroll", () => {
        sections.forEach(section => {
            const position = section.getBoundingClientRect().top;
            if (position < window.innerHeight - 100) {
                section.classList.add("show");
            }
        });
    });

    window.addEventListener("load", () => {
        sections.forEach(section => section.classList.add("show"));
    });
</script>

</body>
</html>