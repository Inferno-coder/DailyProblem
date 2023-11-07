    for(int i=0; i<fishes.size()-1; i++){

        if(fishes[i]>fishes[i+1]){

            fishes.erase(fishes.begin()+i+1);

            i--;

        }

    }

    return fishes.size();
