using System;

namespace TP4_liste_methode
{
    class Program
    {
        static void Main(string[] args)
        {
            //creation des classes gestion
            GestionPatient gestionStagaire = new GestionPatient();
            Patient p = new Patient();
            p.Nom = "ELMERRAKCHI";
            p.DateNaissance = new DateTime(2000, 02, 12);

            gestionStagaire.Ajouter(p);

            Patient p2 = new Patient();
            p2.Nom = "ALAOUI";
            p2.DateNaissance = new DateTime(1995, 05, 1);
            gestionStagaire.Ajouter(p2);
        }
    }
}
