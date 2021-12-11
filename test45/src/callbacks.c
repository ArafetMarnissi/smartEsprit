#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <gtk/gtk.h>
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
#include "callbacks.h"
#include "interface.h"
#include "support.h"
#include "capteur.h"

int rad1,rad2;
int chek[1]={0};
int test=0;







void
on_affichercapteur_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *treeviewaffcapt;
GtkWidget *fenetre_affichier;
fenetre_affichier=lookup_widget(objet_graphique,"Espace_technicien");
treeviewaffcapt=lookup_widget(fenetre_affichier,"treeviewaffcapteur");

affichage_capteur(GTK_TREE_VIEW (treeviewaffcapt));
}


void
on_deconnecterET_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowespadmine;


windowespadmine=lookup_widget(objet_graphique,"Espace_technicien");
gtk_widget_hide (windowespadmine);

}


void
on_chercherc_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *windowachercher;

windowachercher=create_rechercher_capteur ();
gtk_widget_show (windowachercher);

}


void
on_modifierc_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowmod;

windowmod=create_modifier_capteur ();
gtk_widget_show (windowmod);

}


void
on_supprimerc_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *windowasupp;

windowasupp=create_supprimer_capteur ();
gtk_widget_show (windowasupp);

}


void
on_ajouterc_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *windowajouter;

windowajouter=create_ajouter_capteur ();
gtk_widget_show (windowajouter);

}


void
on_treeviewaffcapteur_row_activated    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data)
{
GtkTreeIter iter;
	gchar* id;
	gchar* marque;
	gchar* type;
	gchar* jour;
	gchar* mois;
	gchar* annee;
	gchar* valeur;
	
        
	GtkTreeModel *model = gtk_tree_view_get_model(treeview);
	if (gtk_tree_model_get_iter(model, &iter ,path))
	{
		
		gtk_tree_model_get (GTK_TREE_MODEL(model),&iter,0,&id, 1, &marque, 2, &type ,3, &jour,4,&mois,5,&annee,6,&valeur,-1);
		affichage_capteur(treeview);
}

}


void
on_rb1_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad1=1;}

}


void
on_rb2_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad1=2;}

}


void
on_rb3_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad1=3;}

}


void
on_rb4_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad1=4;}

}


void
on_rb5_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad1=5;}

}


void
on_rb6_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad2=1;}
}


void
on_rb7_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad2=2;}
}


void
on_rb8_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad2=3;}
}


void
on_rb9_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad2=4;}
}


void
on_rb10_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(GTK_TOGGLE_BUTTON(togglebutton)))
{rad2=5;}
}


void
on_confmodf_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data)
{
if(gtk_toggle_button_get_active(togglebutton))
{chek[0]=1;}
}


void
on_buttonannulerm_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *windowamod;


windowamod=lookup_widget(objet_graphique,"modifier_capteur");
gtk_widget_hide (windowamod);


}

///modifier capteur
void
on_confirmerm_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1,*input2;
GtkWidget *comboboxtype;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
capteur d;
GtkWidget *output;

int test=0;
char x[50],ch[20];




input1=lookup_widget(objet_graphique,"entryidm");///id
input2=lookup_widget(objet_graphique,"entryvaleurm");///valeur

jour=lookup_widget(objet_graphique, "spinbuttonjourm");///jour
mois=lookup_widget(objet_graphique, "spinbuttonmoism");///mois
annee=lookup_widget(objet_graphique, "spinbuttonanneem");///annee
comboboxtype=lookup_widget(objet_graphique, "comboboxm");///type

strcpy(d.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(d.valeur,gtk_entry_get_text(GTK_ENTRY(input2)));
if(rad1==1)
strcpy(d.marque,"CHERRY");
else if(rad1==2)
strcpy(d.marque,"NERDO");
else if(rad1==3)
strcpy(d.marque,"MICRO_EPSILON");
else if(rad1==4)
strcpy(d.marque,"BOSCH");
else if(rad1==5)
strcpy(d.marque,"MADE_IN_CHINA");


d.date.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
d.date.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
d.date.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

strcpy(d.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxtype)));
fflush(stdin);
test=recherche_existe(d.id);
if(chek[0]==1)
{
if (test==1)
{
modifier_capteur(d);
output=lookup_widget(objet_graphique,"labelaffichagem");
strcpy(x,"la modification est faite avec succés");
gtk_label_set_text(GTK_LABEL(output),x);
}
else
{output=lookup_widget(objet_graphique,"labelaffichagem");
strcpy(x,"L'identifiant n'existe pas");
gtk_label_set_text(GTK_LABEL(output),x);}
}
else
{output=lookup_widget(objet_graphique,"labelaffichagem");
strcpy(x,"case confirmation n'est pas cocher");
gtk_label_set_text(GTK_LABEL(output),x);}

}







///ajout capteur
void
on_buttonajoutc_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{

GtkWidget *input1,*input2;
GtkWidget *comboboxtype;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
capteur d;
GtkWidget *output;
int test=0;
char x[50],ch[20];
fflush(stdin);



input1=lookup_widget(objet_graphique,"entryida");///id
input2=lookup_widget(objet_graphique,"entryvaleura");///valeur

jour=lookup_widget(objet_graphique, "spinbuttonja");///jour
mois=lookup_widget(objet_graphique, "spinbuttonmoisa");///mois
annee=lookup_widget(objet_graphique, "spinbuttonanneea");///annee
comboboxtype=lookup_widget(objet_graphique, "comboboxac");///type

strcpy(d.id,gtk_entry_get_text(GTK_ENTRY(input1)));
strcpy(d.valeur,gtk_entry_get_text(GTK_ENTRY(input2)));
if(rad2==1)
strcpy(d.marque,"CHERRY");
else if(rad2==2)
strcpy(d.marque,"NERDO");
else if(rad2==3)
strcpy(d.marque,"MICRO_EPSILON");
else if(rad2==4)
strcpy(d.marque,"BOSCH");
else if(rad2==5)
strcpy(d.marque,"MADE_IN_CHINA");


d.date.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
d.date.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
d.date.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

strcpy(d.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxtype)));

//if((strcmp(d.type,"capteur_de_Mouvement")==0 || strcmp(d.type,"capteur_de_Fumee")==0)&& (d.valeur !=0 || d.valeur !=1))






test=recherche_existe(d.id);
if (test==0)
{
ajout_capteur(d);
output=lookup_widget(objet_graphique,"labelconfajout");
strcpy(x,"l'ajout est faite avec succés");
gtk_label_set_text(GTK_LABEL(output),x);
}
else
{
output=lookup_widget(objet_graphique,"labelconfajout");
strcpy(x,"L'identifiant existe");
gtk_label_set_text(GTK_LABEL(output),x);
}

}




void
on_Annulera_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowajout;

windowajout=lookup_widget(objet_graphique,"ajouter_capteur");
gtk_widget_hide (windowajout);

}


void
on_buttonannulerS_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{GtkWidget *windowsupp;


windowsupp=lookup_widget(objet_graphique,"supprimer_capteur");
gtk_widget_hide (windowsupp);

}

///supprimer capteur
void
on_buttonsuppc_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *output;
int n=0;
int test=0;
char x[50],ch[20];
char ident[50]="";
fflush(stdin);


input1=lookup_widget(objet_graphique,"entryids");///id
strcpy(ident,gtk_entry_get_text(GTK_ENTRY(input1)));

test=recherche_existe(ident);
if (test==1)
{
supprimer_capteur(ident);
output=lookup_widget(objet_graphique,"supprimcapt");
strcpy(x," la suppression est faite avec succée");

gtk_label_set_text(GTK_LABEL(output),x);
}
else
{

output=lookup_widget(objet_graphique,"supprimcapt");
strcpy(x,"Le capteur n'existe pas");
gtk_label_set_text(GTK_LABEL(output),x);
}

/*strcpy(ident,"1");
supprimer_capteur(ident);*/

}

///rechercher un capteur
void
on_buttonrc_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *output;
int n=0;
int test=0;
char x[50],ch[20];
char ident[50]="";
fflush(stdin);


input1=lookup_widget(objet_graphique,"entryidr");///id
strcpy(ident,gtk_entry_get_text(GTK_ENTRY(input1)));
test=recherche_existe(ident);

if (test==1)
{
output=lookup_widget(objet_graphique,"labelaffi_capt_r");
strcpy(x," le capteur existe");

gtk_label_set_text(GTK_LABEL(output),x);
}
else
{
output=lookup_widget(objet_graphique,"labelaffi_capt_r");
strcpy(x,"Le capteur n'existe pas");
gtk_label_set_text(GTK_LABEL(output),x);
}

}


void
on_buttonanuulerR_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *windowchercher;


windowchercher=lookup_widget(objet_graphique,"rechercher_capteur");
gtk_widget_hide (windowchercher);

}


void
on_verifierexiste_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data)
{
GtkWidget *input1;
GtkWidget *output;

char x[50],ch[20];
char ident[50]="";
fflush(stdin);


input1=lookup_widget(objet_graphique,"entryidm");///id
strcpy(ident,gtk_entry_get_text(GTK_ENTRY(input1)));
test=recherche_existe(ident);

if (test==1)
{
output=lookup_widget(objet_graphique,"labelverifexiste");
strcpy(x," le capteur existe");

gtk_label_set_text(GTK_LABEL(output),x);
}
else
{
output=lookup_widget(objet_graphique,"labelverifexiste");
strcpy(x,"Le capteur n'existe pas");
gtk_label_set_text(GTK_LABEL(output),x);
}


}

