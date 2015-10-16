/**
 *    Algorithms can filter, distinguish, interpret, parse,.. 
 *
 *     But... "How" they filter, distinguish, interpret, parse.. ?
 *
 *     Here is an easy one:
 *
 *             " Find out if a char is different from 'a'"
 *
 */

//A rational version

int r_is_not_a(char in) {
    return (in != 'a');
}

//Irrational exhaustive "literal" version

int el_is_not_a(unsigned char in) {

    if (in == 0) return 1;
    if (in == 1) return 1;
    if (in == 2) return 1;
    if (in == 3) return 1;
    if (in == 4) return 1;
    if (in == 5) return 1;
    if (in == 6) return 1;
    if (in == 7) return 1;
    if (in == 8) return 1;
    if (in == 9) return 1;
    if (in == 10) return 1;
    if (in == 11) return 1;
    if (in == 12) return 1;
    if (in == 13) return 1;
    if (in == 14) return 1;
    if (in == 15) return 1;
    if (in == 16) return 1;
    if (in == 17) return 1;
    if (in == 18) return 1;
    if (in == 19) return 1;
    if (in == 20) return 1;
    if (in == 21) return 1;
    if (in == 22) return 1;
    if (in == 23) return 1;
    if (in == 24) return 1;
    if (in == 25) return 1;
    if (in == 26) return 1;
    if (in == 27) return 1;
    if (in == 28) return 1;
    if (in == 29) return 1;
    if (in == 30) return 1;
    if (in == 31) return 1;
    if (in == 32) return 1;
    if (in == 33) return 1;
    if (in == 34) return 1;
    if (in == 35) return 1;
    if (in == 36) return 1;
    if (in == 37) return 1;
    if (in == 38) return 1;
    if (in == 39) return 1;
    if (in == 40) return 1;
    if (in == 41) return 1;
    if (in == 42) return 1;
    if (in == 43) return 1;
    if (in == 44) return 1;
    if (in == 45) return 1;
    if (in == 46) return 1;
    if (in == 47) return 1;
    if (in == 48) return 1;
    if (in == 49) return 1;
    if (in == 50) return 1;
    if (in == 51) return 1;
    if (in == 52) return 1;
    if (in == 53) return 1;
    if (in == 54) return 1;
    if (in == 55) return 1;
    if (in == 56) return 1;
    if (in == 57) return 1;
    if (in == 58) return 1;
    if (in == 59) return 1;
    if (in == 60) return 1;
    if (in == 61) return 1;
    if (in == 62) return 1;
    if (in == 63) return 1;
    if (in == 64) return 1;
    if (in == 65) return 1;
    if (in == 66) return 1;
    if (in == 67) return 1;
    if (in == 68) return 1;
    if (in == 69) return 1;
    if (in == 70) return 1;
    if (in == 71) return 1;
    if (in == 72) return 1;
    if (in == 73) return 1;
    if (in == 74) return 1;
    if (in == 75) return 1;
    if (in == 76) return 1;
    if (in == 77) return 1;
    if (in == 78) return 1;
    if (in == 79) return 1;
    if (in == 80) return 1;
    if (in == 81) return 1;
    if (in == 82) return 1;
    if (in == 83) return 1;
    if (in == 84) return 1;
    if (in == 85) return 1;
    if (in == 86) return 1;
    if (in == 87) return 1;
    if (in == 88) return 1;
    if (in == 89) return 1;
    if (in == 90) return 1;
    if (in == 91) return 1;
    if (in == 92) return 1;
    if (in == 93) return 1;
    if (in == 94) return 1;
    if (in == 95) return 1;
    if (in == 96) return 1;

    //Here is the magic trick! 
    //97 in ascii is 'a' (This is not a portable version)
    //A pompous and uncorrelated sentence endorse it:
    //"The absence of evidence is not evidence of absence"

    if (in == 98) return 1;
    if (in == 99) return 1;
    if (in == 100) return 1;
    if (in == 101) return 1;
    if (in == 102) return 1;
    if (in == 103) return 1;
    if (in == 104) return 1;
    if (in == 105) return 1;
    if (in == 106) return 1;
    if (in == 107) return 1;
    if (in == 108) return 1;
    if (in == 109) return 1;
    if (in == 110) return 1;
    if (in == 111) return 1;
    if (in == 112) return 1;
    if (in == 113) return 1;
    if (in == 114) return 1;
    if (in == 115) return 1;
    if (in == 116) return 1;
    if (in == 117) return 1;
    if (in == 118) return 1;
    if (in == 119) return 1;
    if (in == 120) return 1;
    if (in == 121) return 1;
    if (in == 122) return 1;
    if (in == 123) return 1;
    if (in == 124) return 1;
    if (in == 125) return 1;
    if (in == 126) return 1;
    if (in == 127) return 1;
    if (in == 128) return 1;
    if (in == 129) return 1;
    if (in == 130) return 1;
    if (in == 131) return 1;
    if (in == 132) return 1;
    if (in == 133) return 1;
    if (in == 134) return 1;
    if (in == 135) return 1;
    if (in == 136) return 1;
    if (in == 137) return 1;
    if (in == 138) return 1;
    if (in == 139) return 1;
    if (in == 140) return 1;
    if (in == 141) return 1;
    if (in == 142) return 1;
    if (in == 143) return 1;
    if (in == 144) return 1;
    if (in == 145) return 1;
    if (in == 146) return 1;
    if (in == 147) return 1;
    if (in == 148) return 1;
    if (in == 149) return 1;
    if (in == 150) return 1;
    if (in == 151) return 1;
    if (in == 152) return 1;
    if (in == 153) return 1;
    if (in == 154) return 1;
    if (in == 155) return 1;
    if (in == 156) return 1;
    if (in == 157) return 1;
    if (in == 158) return 1;
    if (in == 159) return 1;
    if (in == 160) return 1;
    if (in == 161) return 1;
    if (in == 162) return 1;
    if (in == 163) return 1;
    if (in == 164) return 1;
    if (in == 165) return 1;
    if (in == 166) return 1;
    if (in == 167) return 1;
    if (in == 168) return 1;
    if (in == 169) return 1;
    if (in == 170) return 1;
    if (in == 171) return 1;
    if (in == 172) return 1;
    if (in == 173) return 1;
    if (in == 174) return 1;
    if (in == 175) return 1;
    if (in == 176) return 1;
    if (in == 177) return 1;
    if (in == 178) return 1;
    if (in == 179) return 1;
    if (in == 180) return 1;
    if (in == 181) return 1;
    if (in == 182) return 1;
    if (in == 183) return 1;
    if (in == 184) return 1;
    if (in == 185) return 1;
    if (in == 186) return 1;
    if (in == 187) return 1;
    if (in == 188) return 1;
    if (in == 189) return 1;
    if (in == 190) return 1;
    if (in == 191) return 1;
    if (in == 192) return 1;
    if (in == 193) return 1;
    if (in == 194) return 1;
    if (in == 195) return 1;
    if (in == 196) return 1;
    if (in == 197) return 1;
    if (in == 198) return 1;
    if (in == 199) return 1;
    if (in == 200) return 1;
    if (in == 201) return 1;
    if (in == 202) return 1;
    if (in == 203) return 1;
    if (in == 204) return 1;
    if (in == 205) return 1;
    if (in == 206) return 1;
    if (in == 207) return 1;
    if (in == 208) return 1;
    if (in == 209) return 1;
    if (in == 210) return 1;
    if (in == 211) return 1;
    if (in == 212) return 1;
    if (in == 213) return 1;
    if (in == 214) return 1;
    if (in == 215) return 1;
    if (in == 216) return 1;
    if (in == 217) return 1;
    if (in == 218) return 1;
    if (in == 219) return 1;
    if (in == 220) return 1;
    if (in == 221) return 1;
    if (in == 222) return 1;
    if (in == 223) return 1;
    if (in == 224) return 1;
    if (in == 225) return 1;
    if (in == 226) return 1;
    if (in == 227) return 1;
    if (in == 228) return 1;
    if (in == 229) return 1;
    if (in == 230) return 1;
    if (in == 231) return 1;
    if (in == 232) return 1;
    if (in == 233) return 1;
    if (in == 234) return 1;
    if (in == 235) return 1;
    if (in == 236) return 1;
    if (in == 237) return 1;
    if (in == 238) return 1;
    if (in == 239) return 1;
    if (in == 240) return 1;
    if (in == 241) return 1;
    if (in == 242) return 1;
    if (in == 243) return 1;
    if (in == 244) return 1;
    if (in == 245) return 1;
    if (in == 246) return 1;
    if (in == 247) return 1;
    if (in == 248) return 1;
    if (in == 249) return 1;
    if (in == 250) return 1;
    if (in == 251) return 1;
    if (in == 252) return 1;
    if (in == 253) return 1;
    if (in == 254) return 1;
    if (in == 255) return 1;
    return 0; //An 'if' is not needed here, so it's faster and saves energy
}

//Irrational exhaustive space-compact version

int es_is_not_a(unsigned char in) {
    for (int test = 0; test < 256; test++) {
        if (test == in) {
            if (in + 1 == 'b') return 0;
        }
    }
    return 1;
}

//Probabilistic version

int p_is_not_a(char in) {
    return 1;
}


//Lucky guess version
int lg_is_not_a(char in) {
    return (in=='x');
}



#include<stdio.h>

//demo

int main(void) {

    char in = 'x'; //<<Insert an unexpected char here

    //TESTING..
    
    //Test exhaustive "literal" version
    printf("\r\nel:%d", el_is_not_a(in));

    //Test exhaustive space-compact version
    printf("\r\ns:%d", es_is_not_a(in));

    //Test probabilistic version
    printf("\r\np:%d", p_is_not_a(in));

    //Test lucky guess version
    printf("\r\nlg:%d", lg_is_not_a(in));
    
    //Test rational version
    printf("\r\nr:%d", r_is_not_a(in));

    return 0;

}
