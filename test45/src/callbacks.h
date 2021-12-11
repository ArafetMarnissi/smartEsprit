#include <gtk/gtk.h>


void
on_affichercapteur_clicked             (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_deconnecterET_clicked               (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_chercherc_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_modifierc_clicked                   (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_supprimerc_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_ajouterc_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_treeviewaffcapteur_row_activated    (GtkTreeView     *treeview,
                                        GtkTreePath     *path,
                                        GtkTreeViewColumn *column,
                                        gpointer         user_data);

void
on_rb1_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb2_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb3_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb4_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb5_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_confmodf_toggled                    (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_buttonannulerm_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_confirmerm_clicked                  (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonajoutc_clicked                (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_rb6_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb7_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb8_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb9_toggled                         (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_rb10_toggled                        (GtkToggleButton *togglebutton,
                                        gpointer         user_data);

void
on_Annulera_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonannulerS_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonsuppc_clicked                 (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonrc_clicked                    (GtkWidget       *objet_graphique,
                                        gpointer         user_data);

void
on_buttonanuulerR_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);












/*


GtkWidget *input1,*input2;
GtkWidget *comboboxtype;
GtkWidget *jour;
GtkWidget *mois;
GtkWidget *annee;
capteur d;
GtkWidget *output;
capteur tab[200];
int n=0;
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
strcpy(d.marque,"MICRO-EPSILON");
else if(rad1==4)
strcpy(d.marque,"BOSCH");
else if(rad1==5)
strcpy(d.marque,"MADE IN CHINA");


d.date.jour=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(jour));
d.date.mois=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(mois));
d.date.annee=gtk_spin_button_get_value_as_int(GTK_SPIN_BUTTON(annee));

strcpy(d.type,gtk_combo_box_get_active_text(GTK_COMBO_BOX(comboboxtype)));

n=remplir_tableau(tab,n);
test=recherche_existe(d.id);
if(chek[0]==1)
{
if (test==1)
{
modifier_capteur(d,d.id);
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
strcpy(x,"case confirmation n'est pas coucher");
gtk_label_set_text(GTK_LABEL(output),x);}
*/





















void
on_verifierexiste_clicked              (GtkWidget       *objet_graphique,
                                        gpointer         user_data);
