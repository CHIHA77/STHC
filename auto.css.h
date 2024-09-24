const char autorisation[] PROGMEM = R"rawliteral(


<!DOCTYPE html>
<html lang="en">
  <head>
    <title>SCTH BY YS-INNOVATION</title>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1">
    <link rel="stylesheet" href="https://maxcdn.bootstrapcdn.com/bootstrap/4.3.1/css/bootstrap.min.css"/>
    <style>
 
      .content {
        position: relative;
        text-align: center;
        width: 100%;
       }
body {
  background: radial-gradient(rgba(118, 0, 191, 0.5) 0%, transparent 70%), linear-gradient(#0b161e 40%, #202076 70%);
 
  background-color:  #F6DDCC;

  background-repeat: no-repeat;
  background-attachment: fixed;  
  background-size: cover;
}
 
    </style>
  </head>
  <body>
 
    <div class="content">
      <div class="container-fluid">
<h2  style =" font-size: 80px;" class = "mb-2">STHC</h2>
<h2  style = "font-family: Brush Script MT, cursive; "  class = "mb-0">Smart  Temperature and Humidity Controller</h2>
       <!-- Bouton "Get Started" -->
       <br> 
       <center>
         <div class=" col row justify-content-around mb-4"style="background-color:#82B1FF ;  width:400px;border-radius: 18px;padding:15px 10px 10px 10px;">
           <h3 id="DESIGNLOCAL"
               style="width:400px; font: small-caps bold 19px/30px Georgia, serif; font-size: 30px; color:white; text-align: center; color:black;">
             ***********
           </h3>
           <h3 id="ADDRESSEIP"
               style="width:400px; font: small-caps bold 19px/30px Georgia, serif; font-size: 15px; color:white; text-align: center; color:black;">
             ***********</h3>
         </div>
        </center>
 
        <!-- Formulaire de connexion (initiallement caché) -->
      <div id="loginForm" class="wrapper fadeInDown" style="display: none;">
        <div id="formContent">
          <!-- Votre formulaire existant -->
          
          <!-- Login Form -->
          <center>
          <form class="col mb-0" style="background-color:black ; border-radius: 10px; margin: px; padding-top: 5px;width:450px;" method="GET"
            action="/autorisation" onsubmit="return validateForm()">
            <br>


            <center>
              <input type="text" id="login" class="fadeIn second" name="login" placeholder="login">
              <input type="password" id="password" class="fadeIn third" name="login" placeholder="password">
              <br>
              <input style=" border-radius : 22px ; background-color:#FFE0B2 ;color:black;" type="submit"
                class="fadeIn fourth" value="Log In">
              <br>
              <input id="ID_accesAutorise" name="n_accesAutorise"
                style="width:1px; height: 1px; visibility: hidden;">
            </center>
          </form>
                    </center>

        </div>
      </div>

      <!-- Bouton "Get Started" -->
            <div id="getStartedButton" class="get-started-button" onclick="showLoginForm()" style="background-color:  ;">
        <center>
        <div class ="col row justify-content-around  "style="width: 600px;">

<img src="http://ys-innovation.tn/images_ESP/im01.png" alt="Description de l'image"   style="width:200px  ; height:200px; ">
         </div>
        </center>

            <h4 style="background-color:  ;">
 <div type = "button" style="font-size: 40px; font-family: Lucida Handwriting, cursive; ">Enter</div><br>
 
 <div class="scroll-more" style=" font-size: 60px;">  ->    </div>
 </h4>


      </div>


    </div>
  </div>
     <!-- Copyright YS-INNOVATION 2024. Tous droits réservés. -->
    <div style="font-size:12px;font-family: Georgia, serif; position: fixed; bottom: 0; right:0  ; text-align: center; background-color:  ; color: white; padding: 5px;">
      <spam>  Copyright YS-INNOVATION 2024. Tous droits réservés... </spam> 
      <spam>  <a style="color:white;"href="http://ys-innovation.tn/">www.ys-innovation.tn</a></spam>
    </div>
 
  </body>
</html>

<style>

/* BASIC */
h2 {
font-family: Magneto, cursive;  
margin: 0;
  font-size: 40px;
   color: white;
  text-shadow: 0 0 0.05em #fff, 0 0 0.5em #fe05e1, 0 0 0.5em #fe05e1;
  transform: rotate(deg);
 letter-spacing: 0.01em;
}

.grid {
  background: linear-gradient(transparent 65%, rgba(46, 38, 255, 0.4) 75%, #7d41e6 80%, rgba(46, 38, 255, 0.4) 85%, transparent 95%), linear-gradient(90deg, transparent 65%, rgba(46, 38, 255, 0.4) 75%, #7d41e6 80%, rgba(46, 38, 255, 0.4) 85%, transparent 95%);
  background-size: 30px 30px;
  width: 200vw;
  height: 300vh;
  position: absolute;
  bottom: -120vh;
  transform: rotateX(-100deg);
  -webkit-mask-image: linear-gradient(black, rgba(0, 0, 0, 0) 80%);
}

.wrapper {
  display: flex;
  align-items: center;
  flex-direction: column;
  justify-content: center;
  width: 100%;
  min-height: 50%;
}

h2.inactive {
  color: #cccccc;
}

h2.active {
  color: #0d0d0d;
  border-bottom: 2px solid #5fbae9;
}

input[type=button], input[type=submit], input[type=reset]  {
  background-color: #56baed;
  border: none;
  color: white;
  padding: 15px 80px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  text-transform: uppercase;
  font-size: 13px;
  -webkit-box-shadow: 0 10px 30px 0 rgba(95,186,233,0.4);
  box-shadow: 0 10px 30px 0 rgba(95,186,233,0.4);
  -webkit-border-radius: 5px 5px 5px 5px;
  border-radius: 5px 5px 5px 5px;
  margin: 5px 20px 40px 20px;
  -webkit-transition: all 0.3s ease-in-out;
  -moz-transition: all 0.3s ease-in-out;
  -ms-transition: all 0.3s ease-in-out;
  -o-transition: all 0.3s ease-in-out;
  transition: all 0.3s ease-in-out;
}

input[type=button]:hover, input[type=submit]:hover, input[type=reset]:hover  {
  background-color: #39ace7;
}

input[type=button]:active, input[type=submit]:active, input[type=reset]:active  {
  -moz-transform: scale(0.95);
  -webkit-transform: scale(0.95);
  -o-transform: scale(0.95);
  -ms-transform: scale(0.95);
  transform: scale(0.95);
}

input[type=text] {
  background-color: #f6f6f6;
  border: none;
  color: #0d0d0d;
  padding: 15px 32px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 16px;
  margin: 5px;
  width: 70%;
  border: 2px solid #f6f6f6;
  -webkit-transition: all 0.5s ease-in-out;
  -moz-transition: all 0.5s ease-in-out;
  -ms-transition: all 0.5s ease-in-out;
  -o-transition: all 0.5s ease-in-out;
  transition: all 0.5s ease-in-out;
  -webkit-border-radius: 5px 5px 5px 5px;
  border-radius: 5px 5px 5px 5px;
}
input[type=password] {
  background-color: #f6f6f6;
  border: none;
  color: #0d0d0d;
  padding: 15px 32px;
  text-align: center;
  text-decoration: none;
  display: inline-block;
  font-size: 16px;
  margin: 5px;
  width: 70%;
  border: 2px solid #f6f6f6;
  -webkit-transition: all 0.5s ease-in-out;
  -moz-transition: all 0.5s ease-in-out;
  -ms-transition: all 0.5s ease-in-out;
  -o-transition: all 0.5s ease-in-out;
  transition: all 0.5s ease-in-out;
  -webkit-border-radius: 5px 5px 5px 5px;
  border-radius: 5px 5px 5px 5px;
}

input[type=text]:focus {
  background-color: #fff;
  border-bottom: 2px solid #5fbae9;
}

input[type=text]:placeholder {
  color: ;
}
.fadeInDown {
  -webkit-animation-name: fadeInDown;
  animation-name: fadeInDown;
  -webkit-animation-duration: 1s;
  animation-duration: 1s;
  -webkit-animation-fill-mode: both;
  animation-fill-mode: both;
}

@-webkit-keyframes fadeInDown {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@keyframes fadeInDown {
  0% {
    opacity: 0;
    -webkit-transform: translate3d(0, -100%, 0);
    transform: translate3d(0, -100%, 0);
  }
  100% {
    opacity: 1;
    -webkit-transform: none;
    transform: none;
  }
}

@-webkit-keyframes fadeIn { from { opacity:0; } to { opacity:1; } }
@-moz-keyframes fadeIn { from { opacity:0; } to { opacity:1; } }
@keyframes fadeIn { from { opacity:0; } to { opacity:1; } }

.fadeIn {
  opacity:0;
  -webkit-animation:fadeIn ease-in 1;
  -moz-animation:fadeIn ease-in 1;
  animation:fadeIn ease-in 1;

  -webkit-animation-fill-mode:forwards;
  -moz-animation-fill-mode:forwards;
  animation-fill-mode:forwards;

  -webkit-animation-duration:1s;
  -moz-animation-duration:1s;
  animation-duration:1s;
}

.fadeIn.first {
  -webkit-animation-delay: 0.4s;
  -moz-animation-delay: 0.4s;
  animation-delay: 0.4s;
}

.fadeIn.second {
  -webkit-animation-delay: 0.6s;
  -moz-animation-delay: 0.6s;
  animation-delay: 0.6s;
}

.fadeIn.third {
  -webkit-animation-delay: 0.8s;
  -moz-animation-delay: 0.8s;
  animation-delay: 0.8s;
}

.fadeIn.fourth {
  -webkit-animation-delay: 1s;
  -moz-animation-delay: 1s;
  animation-delay: 1s;
}
.underlineHover:after {
  display: block;
  left: 0;
  bottom: -10px;
  width: 0;
  height: 2px;
  background-color: #56baed;
  content: "";
  transition: width 0.2s;
}

.underlineHover:hover {
  color: #0d0d0d;
}

.underlineHover:hover:after{
  width: 100%;
}

*:focus {
    outline: none;
}

#icon {
  width:60%;
}
@import url(https://fonts.googleapis.com/css?family=Abril+Fatface&display=swap);
@-webkit-keyframes bounce {
  0%, 20%, 50%, 80%, to {
    transform: translateZ(-2px) translateY(5px);
  }
  40% {
    transform: rotateY(180deg) translateZ(-2px) translateY(-35px);
  }
  60% {
    transform: translateZ(-2px) translateY(-25px);
  }
}
@keyframes bounce {
  0%, 20%, 50%, 80%, to {
    transform: translateZ(-2px) translateY(5px);
  }
  40% {
    transform: rotateY(180deg) translateZ(-2px) translateY(-35px);
  }
  60% {
    transform: translateZ(-2px) translateY(-25px);
  }
}
 
h4 {
  font-size: 3.5rem;
  line-height: 80%;
  transform: rotateX(0) rotateY(-25deg);
  text-transform: uppercase;
   text-align: center;
  color: #b9dfff;
  color: #fff;
  font-family: "Zefani";
  font-family: "Abril Fatface";
  margin: 1rem auto;
  position: relative;
  padding: 2rem 0 2rem;
  text-shadow: 0 0 5px #fff, 0 0 10px #fff, 0 0 15px #fff, 0 0 20px #228dff, 0 0 35px #228dff, 0 0 40px #228dff;
}
h4 span {
  display: inline-block;
}

.scroll-more {
  color: white;
  text-align: center;
  width: 450px;
  position: absolute;
  bottom: 1rem;
  left: calc(50% - 225px);
  margin: 0 auto;
  font-size: 25rem;
  opacity: 1;
  transition: opacity 0.3s ease;
  font-family: monospace;
  pointer-events: none;
  z-index: -1;
  transform-origin: center;
  -webkit-animation: bounce 3s cubic-bezier(0.37, 0, 0.21, 1.02) infinite, fonts 5s linear infinite;
  animation: bounce 3s cubic-bezier(0.37, 0, 0.21, 1.02) infinite, fonts 5s linear infinite;

</style>
  <script>
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm                      
   function redir() {self.location.href="/exit"}
   setTimeout(redir,120000)
//mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm
        var pseudo;
        var mdp;
        var pseudoAdmin;
        var mdpAdmin;            
        var xhttp = new XMLHttpRequest();
        xhttp.onreadystatechange = function()
        {
          if (this.readyState == 4 && this.status == 200)
          {
            var reponse = this.responseText;
            var rep = reponse.split("x");  

            pseudo       = rep[0];
            mdp         = rep[1];                      
            pseudoAdmin   = rep[2];
            mdpAdmin      = rep[3];
          }
        };

        xhttp.open("GET", "/paramAccess", true);
        xhttp.send();
//*****************************************************************************************
  var xhttp = new XMLHttpRequest();
    xhttp.onreadystatechange = function()
            {
              if (this.readyState == 4 && this.status == 200)
                  {
         
                                        var reponse = this.responseText;
                                        var rep = reponse.split("€§");  
                                       
                                        document.getElementById("DESIGNLOCAL").innerHTML  =  rep[0];  
                    document.getElementById("ADDRESSEIP").innerHTML   =  rep[1];  
          }
        };
        xhttp.open("GET", "/var_infosgeneral", true);
        xhttp.send();

//*****************************************************************************************

    function showLoginForm() {
      // Affiche le formulaire de connexion
      document.getElementById('loginForm').style.display = 'block';
            document.getElementById('getStartedButton').style.display = 'none';

    }

    function validateForm() {
      // Ajoutez votre logique de validation du formulaire ici
      // Pour l'exemple, retourne toujours true
         
         
               {
                     var u = document.getElementById("login").value;
                     var p = document.getElementById("password").value;

                     if(u== "")
                           {
                             alert("SVP ENTREZ VOTRE NOM UTILISATEUR");
                             return false;
                           }
                     if(p == "")
                           {
                             alert("SVP ENTREZ VOTRE MOT DE PASSE");
                             return false;
                           }

                     if((u== pseudo && p == mdp)|| (u== pseudoAdmin && p == mdpAdmin))
                           {
                             document.getElementById("ID_accesAutorise").value="true";
                            return true;

                             
                           }
                     else
                           {
                             alert("Nom d'utilisateur ou mot de passe incorrecte !!!");
                             return false;
                           }
                }
                }
         
      </script>
</html>

)rawliteral";
