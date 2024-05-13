#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>
#define MAX_CART_ITEMS 200

// Function prototypes
void CategoriesMenu();
void login();
void signUp();
void electronicsMenu();
void laptopsSection();
void televisionsSection();
void camerasSection();
void mobilePhonesSection();
void fashionSection();
void homeAndLivingSection();
void beautyAndHealthSection();
void sportsAndOutdoorSection();
void kidsAndBabiesSection();
void shipping();
bool strongPasswordGenerator(char password[]);//void addToCart(const char item[], float price);
float TotalBill=0;
struct CartItem {
    char name[50];
    char brand[50];
    float price;
};


struct CartItem cart[MAX_CART_ITEMS];
int cartItemCount = 0; // Keep track of the number of items in the cart
 void AddToCart(char Name[], char Brand[], float Price) {
    if (cartItemCount >= MAX_CART_ITEMS) {
        printf("Sorry, the cart is full.\n");
        return;
    }

    // Add item to the cart
    strcpy(cart[cartItemCount].name, Name);
    strcpy(cart[cartItemCount].brand, Brand);
    cart[cartItemCount].price = Price;
    TotalBill+=Price;

    // Increment the cart item count
    cartItemCount++;

    printf("Item added to cart: %s (%s) - $%.2f\n", Name, Brand, Price);
}
void DisplayCart() {
    if (cartItemCount == 0) {
        printf("The cart is empty.\n");
        return;
    }

    printf("Items in the cart:\n");
    for (int i = 0; i < cartItemCount; i++) {
        printf("%d. %s (%s) - $%.2f\n", i + 1, cart[i].name, cart[i].brand, cart[i].price);
    }
}
void shipping(){
    DisplayCart();
    printf("\n");
    char name[50];
	char mobile_number[20];
	char province[50];
	char city[50];
	char address[100];
	int payment_Choice;
	int card_number;
	int expiry_date;
	int cvv;
	int postal_code;
	
	
	printf("Full Name: ");
	scanf("%s", name);
	
	printf("Mobile Number: ");
	scanf("%s", mobile_number);
	
	printf("Province: ");
	scanf("%s", province);
	
	printf("City: ");
	scanf("%s", city);
	
	printf("Full Address-House no/street/area: ");
	scanf("%s", address);
	
	printf(" Payment method:\n");
	printf("(1) Cash On Delivery(COD)\n");
	printf("(2) Credit card \n"); 
	scanf("%d",&payment_Choice);
	
	if(payment_Choice==1){
		//put billing function here
		printf(" your details have been noted and parcel will be delievered to you soon \n");
        printf("Your Total bill is Rs ");
        printf("%.2f",TotalBill);
	}
	
	else if(payment_Choice==2){
		printf("Credit Card details:");
		
		printf("\nCard Number: ");
		scanf("%d",&card_number);
	
		printf("\nExpiration Date(MM/YY): ");
		scanf("%s", expiry_date);
		
		printf("\nCVV(4-digits): ");
		scanf("%d",&cvv);
		
		printf("\nPostal Code(5-digits): ");
		scanf("%d",&postal_code);
        printf(" your details have been noted and parcel will be delievered to you soon \n");
        printf("Your Total bill is Rs ");
        printf("%.2f",TotalBill);
		
	}
	
	else{
		printf("please select between option 1 and 2. \n");
	}   
}


/*void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
*/
int main() {
    
   int option;
    while (option !=8 )
    {
  
    
     
printf("        ▄████████    ▄████████    ▄█     █▄    ███    █▄   ▄█          ▄████████     ███       \n");
printf("        ███    ███   ███    ███   ███    ███   ███    ███ ███         ███    ███ ▀█████████▄   \n");
printf("        ███    █▀    ███    ███   ███    ███   ███    ███ ███         ███    ███    ▀███▀▀██   \n");
printf("        ███          ███    ███  ▄███▄▄▄▄███▄▄ ███    ███ ███         ███    ███     ███   ▀   \n");
printf("        ███████████ ▀███████████▀▀███▀▀▀▀███▀  ███    ███ ███       ▀███████████     ███      \n");
printf("               ███   ███    ███   ███    ███   ███    ███ ███         ███    ███     ███      \n");
printf("         ▄█    ███   ███    ███   ███    ███   ███    ███ ███▌    ▄   ███    ███     ███      \n");
printf("       ▄████████▀    ███    █▀    ███    █▀    ████████▀  █████▄▄██   ███    █▀     ▄████▀   \n");
        printf("__________\n");
        printf("Welcome To Sahulat App\n");
        printf("1. Login\n");
        printf("2. Sign Up\n");
        printf("3. Exit\n");
        if (scanf("%d", &option) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clearing the input buffer
            continue; // Restart the loop
        }
        printf("\n");
        getchar();

        switch (option) {
            case 1:
                login();
                break;
            case 2:
                signUp();
                break;
            case 3:
                printf("Exiting the delivery app. Goodbye!\n");
                break;
            default:
                printf("Invalid option. Please choose 1, 2, or 3.\n");
        }
        if (option ==3)
        {
            break;
        }
        
    }

};
void CategoriesMenu() {
    int choice;

    while (choice !=9)
    {
          {
        printf("\n");
printf("                  ▄▄▄▄███▄▄▄▄      ▄████████ ███▄▄▄▄   ███    █▄         \n");
printf("                ▄██▀▀▀███▀▀▀██▄   ███    ███ ███▀▀▀██▄ ███    ███        \n ");
printf("                ███   ███   ███   ███    █▀  ███   ███ ███    ███         \n");
printf("                ███   ███   ███  ▄███▄▄▄     ███   ███ ███    ███         \n");
printf("                ███   ███   ███ ▀▀███▀▀▀     ███   ███ ███    ███         \n");
printf("                ███   ███   ███   ███    █▄  ███   ███ ███    ███         \n");
printf("                ███   ███   ███   ███    ███ ███   ███ ███    ███         \n");
printf("                 ▀█   ███   █▀    ██████████  ▀█   █▀  ████████▀          \n");    
printf("\n");                                     
        
        
        printf("1. Electronics\n");
        printf("2. Fashion\n");
        printf("3. Home & Living\n");
        printf("4. Beauty & Health\n");
        printf("5. Sports & Outdoor\n");
        printf("6. Kids & Babies\n");

        printf("\n");
        printf("                                                                     7. View cart\n");
        printf("                                                                     8. continue to shipping\n");
        printf("                                                                     9. Exit\n");
        printf("Enter your choice: ");
        printf("\n");if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please enter a number.\n");
            while (getchar() != '\n'); // Clearing the input buffer
            continue; // Restart the loop
        }


        switch (choice) {
            case 1:
                printf("You chose Electronics section.\n");
                electronicsMenu();
                break;
            case 2:
                printf("You chose Fashion section.\n");
                fashionSection();
                break;
            case 3:
                printf("You chose Home & Living section.\n");
                homeAndLivingSection();
                break;
            case 4:
                printf("You chose Beauty & Health section.\n");
                beautyAndHealthSection();
                break;
            case 5:
                printf("You chose Sports & Outdoor section.\n");
                sportsAndOutdoorSection();
                break;
            case 6:
                printf("You chose Kids & Babies section.\n");
                kidsAndBabiesSection();
                break;
            case 7:
                printf("Displaying cart\n");
                DisplayCart();
                break;
                
                case 8:
                shipping();
                break;
                
                case 9:
                printf("back to menu\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 8.\n");
        }
        if (choice==8)
        {
            break;
        }
        
    }  
}}

void login() {
    int choice;
    char storedName[20];
    char storedPassword[50];

    printf("Enter Name: ");
    scanf("%s",storedName);
    printf("Enter Password: ");
    scanf("%s",storedPassword);

    CategoriesMenu();

   
}

void signUp() {
    bool access = false;
    char name[20];
    char email[20];
    char newPassword[50];

    printf("Enter Name: ");
    scanf("%s", name);
    printf("Enter Email: ");
    scanf("%s", email);
    printf("Enter Password (at least 6 characters): ");
    scanf("%s", newPassword);

    access = strongPasswordGenerator(newPassword);

    if (access) {
     
      CategoriesMenu();
       
    } else {
        printf("Password is not strong enough. Please try again.\n");
        signUp();
    }
}

bool strongPasswordGenerator(char password[]) {
    int num = 0, character = 0, special = 0, lowercase = 0, uppercase = 0;

    for (int i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            uppercase++;
        } else if (islower(password[i])) {
            lowercase++;
        } else if (isdigit(password[i])) {
            num++;
        } else {
            special++;
        }
    }

    if (num >= 1 && special >= 1 && uppercase >= 1 && lowercase >= 1 && strlen(password) >= 6) {
        return true;
    } else {
        return false;
    }
}

void electronicsMenu() {
    int choice;
    printf("_______________________________\n");
    printf("Welcome to Electronics section!\n");
    printf("1. Mobile Phones\n");
    printf("2. Laptops & Computers\n");
    printf("3. Televisions\n");
    printf("4. Cameras\n");
    printf("5. Back to main menu\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    // Switch case to handle user choice in Electronics section
    switch(choice) {
        case 1:
            printf("You chose Mobile Phones.\n");
            mobilePhonesSection();
            break;
        case 2:
            printf("You chose Laptops & Computers.\n");
            laptopsSection();
            break;
        case 3:
            printf("You chose Televisions.\n");
            televisionsSection();
            break;
        case 4:
            printf("You chose Cameras.\n");
            camerasSection();
            break;
        case 5:
            printf("Returning to the main menu.\n");
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }
}

// Implement the remaining sections (fashion, home & living, beauty & health, sports & outdoor, kids & babies) similarly


    struct LaptopComputer {
    int index;
    char brand[50];
    char model[50];
    float price;
};





void laptopsSection() {




    // Array of laptops and computers
    struct LaptopComputer laptopsComputers[] = {
        {0,"Apple", "MacBook Air", 999.99},
        {1,"Dell", "XPS 13", 1099.99},
        {2,"HP", "Envy x360", 899.99},
        {3,"Lenovo", "ThinkPad X1 Carbon", 1299.99},
        {4,"Asus", "ZenBook 14", 799.99},
        {5,"Razor", "XPS 13", 1099.99},
        {6,"Toshiba", "Envy x360", 899.99},
        {7,"Rayzen", "ThinkPad X1 Carbon", 1299.99},
        {8,"Asus", "ZenBook 14", 799.99},
        
    };

    
    for(int i = 0; i < 9; i++){
        printf("%d  Brand: %s, Model: %s, Price: $%.2f\n",laptopsComputers[i].index,laptopsComputers[i].brand, laptopsComputers[i].model, laptopsComputers[i].price);
    }
    int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(laptopsComputers) / sizeof(laptopsComputers[0])) {
        AddToCart(laptopsComputers[choice].brand,laptopsComputers->model, laptopsComputers[choice].price);

    } else {
        printf("Invalid choice.\n"); 
        laptopsSection();
    }

}        


  
  
  struct Television {
    int index;
    char brand[50];
    char model[50];
    float price;
};


void televisionsSection() {
    
  

        struct Television televisions[] = {
        {0,"Samsung", "QLED Q80T", 1499.99},
        {1,"LG", "OLED CX", 1999.99},
        {2,"Sony", "Bravia X900H", 1299.99},
        {3,"TCL", "6-Series", 799.99},
        {4,"Hisense", "H8G", 699.99},
        {5,"TLC", "OLED CX", 1999.99},
        {6,"Orient", "Bravia X900H", 1299.99},
        
    };

    for (int i = 0; i < 7; i++)
    {
 printf("%d  Brand: %s, Model: %s, Price: $%.2f\n",televisions[i].index,televisions[i].brand, televisions[i].model, televisions[i].price);
    }
int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(televisions) / sizeof(televisions[0])) {
        AddToCart(televisions[choice].brand,televisions->model, televisions[choice].price);

    } else {
        printf("Invalid choice.\n"); 
        televisionsSection();
    }


}



struct Camera{
    int index;
    char brand[50];
    char model[50];
    float price;
};




void camerasSection() {
    
    

    
    struct Camera cameras[] = {
        {0,"Canon", "EOS Rebel T7", 499.99},
        {1,"Nikon", "D3500", 449.99},
        {2,"Sony", "Alpha a6000", 599.99},
        {3,"Fujifilm", "X-T30", 899.99},
        {4,"Panasonic", "Lumix G7", 499.99},
        {5,"Hitachi", "EOS Rebel T7", 499.99},
        {6,"Nikon", "D3500", 449.99},
        {7,"Sony", "Alpha a6000", 599.99},
    };

   
  for (int i = 0; i < 8; i++)
  {
    printf("%d  Brand: %s, Model:  %s, Price: $   %.2f\n",cameras[i].index,cameras[i].brand, cameras[i].model, cameras[i].price);
    
  }
    int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(cameras) / sizeof(cameras[0])) {
        AddToCart(cameras[choice].brand,cameras->model, cameras[choice].price);

    } else {
        printf("Invalid choice.\n"); 
        camerasSection();
    }



}
struct Smartphone {
    int index;
    char brand[20];
    char model[20];
    float price;

    };



void mobilePhonesSection() {
    
    struct Smartphone smartphones[] = {
        {0,"Samsung", "Galaxy S21", 999.99},
        {1,"Apple", "iPhone 12", 1099.99},
        {2,"OnePlus", "8 Pro", 899.99},
        {3,"Samsung", "Galaxy Note 20", 899.99},
        {4,"Apple", "iPhone SE", 399.99},
        {5,"Samsung", "Galaxy S21", 999.99},
        {6,"Apple", "iPhone 11", 999.99},
        {7,"OnePlus", "9 T", 899.99},
        {8,"Samsung", "Galaxy Note 8", 899.99},
        {9,"Apple", "iPhone 8", 399.99},
        {10,"Google", "Pixel 5", 699.99},
        {11,"Xiaomi", "Mi 11", 799.99},
        {12,"Apple", "iPhone 12mini", 1199.99},
        {13,"OnePlus", "7T", 899.99},
        {14,"Samsung", "Galaxy Note 10", 899.99},
        {15,"Apple", "iPhone SE(2023)", 399.99},
        {16,"Google", "Pixel 6", 789.99},
        {17,"Xiaomi", "Mi 11T", 899.99}
    };

    
    printf("Smartphones:\n");
    for(int i = 0; i < 18; i++) {
        printf("%d  Brand: %s, Model: %s, Price: $%.2f\n",smartphones[i].index,smartphones[i].brand, smartphones[i].model, smartphones[i].price);
    }
    int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(smartphones) / sizeof(smartphones[0])) {
        AddToCart(smartphones[choice].brand,smartphones->model, smartphones[choice].price);

    } else {
        printf("Invalid choice.\n"); 
        mobilePhonesSection();
    }


}


struct FashionItem
{
    int index; 
    char brand[50];
    char item[50];
    float price;
};


void fashionSection() {
    
    



    struct FashionItem fashionItems[] = {
        {0,"Gucci", "Shirt", 250.00},
        {1,"Zara", "Jeans", 59.99},
        {2,"Prada", "Dress", 899.99},
        {3,"Nike", "Sneakers", 129.99},
        {4,"Adidas", "Cap", 29.99},
        {5,"Versace", "Suit", 1500.00},
        {6,"Calvin Klein", "Und***ear", 19.99},
        {7,"H&M", "T-Shirt", 14.99},
        {8,"Armani", "Jacket", 799.99},
        {9,"Balenciaga", "Sneakers", 895.00},
        {10,"Versace", "Suit", 1500.00},
        {11,"Calvin Klein", "Und***ear", 19.99},
        {12,"H&M", "T-Shirt", 14.99},
        {13,"Armani", "Jacket", 799.99},
        {14,"Balenciaga", "Sneakers", 895.00}

    };

    printf("__________\n");
    printf("Welcome to Fashion section!\n");
    printf("__________\n");

    for (int i = 0; i < 15; i++) {
        printf("%d  Brand: %s, Item: %s, Price: $%.2f\n",fashionItems[i].index,fashionItems[i].brand, fashionItems[i].item, fashionItems[i].price);
    }
    int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(fashionItems) / sizeof(fashionItems[0])) {
        AddToCart(fashionItems[choice].brand,fashionItems->item, fashionItems[choice].price);

    } else {
        printf("Invalid choice.\n"); 
       fashionSection();
    }

}

struct HomeLivingItem {
    int index;
    char name[50];    
    char brand[50];   
    float price;             
         
};

void homeAndLivingSection() {


    
 


struct HomeLivingItem HomeItems[]={
        
        {0,"IKEA", "Chair", 79.99},
        {1,"Philips", "Light Bulbs", 9.99},
        {2,"Dyson", "Vacuum Cleaner", 399.99},
        {3,"Nest", "Thermostat", 249.99},
        {4,"Samsung", "Smart TV", 799.99},
        {5,"Cuisinart", "Coffee Maker", 129.99},
        {6,"Brooklinen", "Bed Sheets", 99.99},
        {7,"OXO", "Kitchen Utensil Set", 49.99},
        {8,"Keurig", "Espresso Machine", 149.99},
        {9,"KitchenAid", "Stand Mixer", 299.99},
        {10,"IKEA", "Chair", 79.99},
        {11,"Philips", "Light Bulbs", 9.99},
        {12,"Dyson", "Vacuum Cleaner", 399.99},
        {13,"Nest", "Thermostat", 249.99},
           

};
 for (int i = 0; i < 15; i++) {
        printf("%d  Brand: %s, Item: %s, Price: $%.2f\n",HomeItems[i].index,HomeItems[i].name, HomeItems[i].brand, HomeItems[i].price);
    }

int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(HomeItems) / sizeof(HomeItems[0])) {
        AddToCart(HomeItems[choice].name,HomeItems->brand, HomeItems[choice].price);

    } else {
        printf("Invalid choice.\n"); 
       homeAndLivingSection();
    }

}

struct BeautyHealthItem {
        int index;
        char brand[50];   
        char type[50];    
        float price;      
    };


void beautyAndHealthSection() {
    

    struct BeautyHealthItem BeautyHealthItems[] = {
        {0,"L'Oréal", "Shampoo", 8.99},
        {1,"Neutrogena", "Sunscreen", 12.49},
        {2,"Dove", "Body Wash", 5.99},
        {3,"Cetaphil", "Moisturizer", 9.99},
        {4,"Olay", "Anti-aging Cream", 24.99},
        {5,"Maybelline", "Mascara", 7.99},
        {6,"Crest", "Toothpaste", 3.49},
        {7,"Listerine", "Mouthwash", 6.99},
        {8,"Vaseline", "Lip Balm", 1.99},
        {9,"Head & Shoulders", "Dandruff Shampoo", 10.99}
    };

    for (int i = 0; i < sizeof(BeautyHealthItems) / sizeof(BeautyHealthItems[0]); i++) {
        printf("%d  Brand: %s, Type: %s, Price: $%.2f\n",BeautyHealthItems[i].index,BeautyHealthItems[i].brand, BeautyHealthItems[i].type, BeautyHealthItems[i].price);
    }
int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(BeautyHealthItems) / sizeof(BeautyHealthItems[0])) {
        AddToCart(BeautyHealthItems[choice].brand,BeautyHealthItems->type, BeautyHealthItems[choice].price);

    } else {
        printf("Invalid choice.\n");
       beautyAndHealthSection();
    }

}

struct SportsOutdoorItem {
        int index;
        char brand[50];   
        char type[50];    
        float price;      
    };

void sportsAndOutdoorSection() {
    
     

    struct SportsOutdoorItem SportsOutdoorItems[] = {
        {1,"Nike", "Running Shoes", 99.99},
        {2,"The North Face", "Backpack", 79.99},
        {3,"Yeti", "Cooler", 249.99},
        {4,"Under Armour", "Sports Shirt", 29.99},
        {5,"Columbia", "Hiking Boots", 129.99},
        {6,"Yakima", "Bike Rack", 199.99},
        {7,"Adidas", "Soccer Ball", 19.99},
        {8,"Coleman", "Tent", 149.99},
        {9,"Spalding", "Basketball", 24.99},
        {10,"Eureka!", "Sleeping Bag", 79.99}
    };

    for (int i = 0; i < sizeof(SportsOutdoorItems) / sizeof(SportsOutdoorItems[0]); i++) {
        printf("%d  Brand: %s, Type: %s, Price: $%.2f\n",SportsOutdoorItems[i].index, SportsOutdoorItems[i].brand, SportsOutdoorItems[i].type, SportsOutdoorItems[i].price);
    }

    int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(SportsOutdoorItems) / sizeof(SportsOutdoorItems[0])) {
        AddToCart(SportsOutdoorItems[choice].brand,SportsOutdoorItems->type, SportsOutdoorItems[choice].price);

    } else {
        printf("Invalid choice.\n");
        sportsAndOutdoorSection();
    }
    
}

struct KidsBabiesItem {
        char brand[50];   
        char name[50];    
        float price;      
    };
void kidsAndBabiesSection() {
 
  

    struct KidsBabiesItem KidsBabiesItems[] = {
        {"Fisher-Price", "Baby Toy", 19.99},
        {"Carter's", "Baby Onesie", 12.99},
        {"LEGO", "Building Blocks", 29.99},
        {"Gerber", "Baby Food", 1.99},
        {"Graco", "Baby Stroller", 149.99},
        {"Playtex", "Baby Bottle", 5.99},
        {"Huggies", "Diapers", 24.99},
        {"Barbie", "Doll", 9.99},
        {"Pampers", "Wipes", 12.49},
        {"Hot Wheels", "Toy Cars", 3.99}
    };

    for (int i = 0; i < sizeof(KidsBabiesItems) / sizeof(KidsBabiesItems[0]); i++) {
        printf("Brand: %s, Type: %s, Price: $%.2f\n", KidsBabiesItems[i].brand, KidsBabiesItems[i].name, KidsBabiesItems[i].price);
  }
    int choice;
    printf("Enter the index of item that you want to buy \n");
    scanf("%d",&choice);
       if (choice >= 1 && choice <= sizeof(KidsBabiesItems) / sizeof(KidsBabiesItems[0])) {
        AddToCart(KidsBabiesItems[choice].brand,KidsBabiesItems->name, KidsBabiesItems[choice].price);

    } else {
        printf("Invalid choice.\n");
        kidsAndBabiesSection();
    }
    
}
