function inviaEmail() {
    var emailAddress = laaouatni.anas@outlook.it            // prova a mettere la tua mail qui.
    var message = 'Boungiorno, \n...'                       // questo è il body della mail.
    var subject = 'oggetto della mail';
    MailApp.sendEmail(emailAddress, subject, message);
  }
}