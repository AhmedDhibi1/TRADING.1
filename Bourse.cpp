#include "Date.h"
#include"PrixJournalier.h"
#include"PersistancePrixJournalier.h"
#include "Bourse.h"
#include<set>
#include<iostream>
#include<string>
#include<stdlib.h>
#include<vector>
Date Bourse::getDateAujourdhui() const
{
    return (this->Date_Ajourdhui);
}
