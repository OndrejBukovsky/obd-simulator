
#include "includes.h"

const DSControlTypeDef  DSControl14230[DSTotal14230] = {
    {Numeric,  STR007,  3,5,1, 0,"%3d",  gzmsl   ,"个  ",NONE    ,"000<=data<=127"   },	//000
    {Character,STR008,  3,5,1, 2,"   ",  NONE    ,"    ",gzdzt   ,"ON 、OFF"         },	//001
    {Character,STR010,  3,6,1, 2,"   ",  NONE    ,"    ",zcshjc  ,"支持 、不支持"    },	//002
    {Character,STR011,  3,6,1, 2,"   ",  NONE    ,"    ",zcryjc  ,"支持 、不支持"    },	//003
    {Character,STR012,  3,6,1, 2,"   ",  NONE    ,"    ",zcbjjc  ,"支持 、不支持"    },	//004
    {Character,STR013,  3,6,1, 2,"   ",  NONE    ,"    ",shjcjx  ,"OK 、未完成"      },	//005
    {Character,STR014,  3,6,1, 2,"   ",  NONE    ,"    ",ryjcjx  ,"OK 、未完成"      },	//006
    {Character,STR015,  3,6,1, 2,"   ",  NONE    ,"    ",bjjcjx  ,"OK 、未完成"      },	//007
    {Character,STR016,  3,7,1, 2,"   ",  NONE    ,"    ",zcshjc  ,"支持 、不支持"    },	//008
    {Character,STR017,  3,7,1, 2,"   ",  NONE    ,"    ",zcryjc  ,"支持 、不支持"    },	//009
    {Character,STR018,  3,7,1, 2,"   ",  NONE    ,"    ",zczyjc  ,"支持 、不支持"    },	//010
    {Character,STR019,  3,7,1, 2,"   ",  NONE    ,"    ",zcfqjc  ,"支持 、不支持"    },	//011
    {Character,STR020,  3,7,1, 2,"   ",  NONE    ,"    ",zcpmjc  ,"支持 、不支持"    },	//012
    {Character,STR021,  3,7,1, 2,"   ",  NONE    ,"    ",zcegjc  ,"支持 、不支持"    },	//013
    {Character,STR022,  3,8,1, 2,"   ",  NONE    ,"    ",nmhcjx  ,"OK 、未完成"      },	//014
    {Character,STR023,  3,8,1, 2,"   ",  NONE    ,"    ",dyhcjx  ,"OK 、未完成"      },	//015
    {Character,STR024,  3,8,1, 2,"   ",  NONE    ,"    ",zyyljx  ,"OK 、未完成"      },	//016
    {Character,STR025,  3,8,1, 2,"   ",  NONE    ,"    ",ryjcjx  ,"OK 、未完成"      },	//017
    {Character,STR026,  3,8,1, 2,"   ",  NONE    ,"    ",bjjcjx  ,"OK 、未完成"      },	//018
    {Character,STR027,  3,8,1, 2,"   ",  NONE    ,"    ",zcegjx  ,"OK 、未完成"      },	//019
    {Character,STR028, 83,6,1, 2,"   ",  NONE    ,"    ",zcshjc  ,"支持 、不支持"    },	//020
    {Character,STR029, 83,6,1, 2,"   ",  NONE    ,"    ",zcryjc  ,"支持 、不支持"    },	//021
    {Character,STR030, 83,6,1, 2,"   ",  NONE    ,"    ",zcbjjc  ,"支持 、不支持"    },	//022
    {Character,STR031, 83,6,1, 2,"   ",  NONE    ,"    ",shjcjx  ,"OK 、未完成"      },	//023
    {Character,STR032, 83,6,1, 2,"   ",  NONE    ,"    ",ryjcjx  ,"OK 、未完成"      },	//024
    {Character,STR033, 83,7,1, 2,"   ",  NONE    ,"    ",zcshjc  ,"支持 、不支持"    },	//025
    {Character,STR034, 83,7,1, 2,"   ",  NONE    ,"    ",zcryjc  ,"支持 、不支持"    },	//026
    {Character,STR035, 83,7,1, 2,"   ",  NONE    ,"    ",zczyjc  ,"支持 、不支持"    },	//027
    {Character,STR036, 83,7,1, 2,"   ",  NONE    ,"    ",zcfqjc  ,"支持 、不支持"    },	//028
    {Character,STR037, 83,7,1, 2,"   ",  NONE    ,"    ",zcpmjc  ,"支持 、不支持"    },	//029
    {Character,STR038, 83,7,1, 2,"   ",  NONE    ,"    ",zcegjc  ,"支持 、不支持"    },	//030
    {Character,STR039, 83,8,1, 2,"   ",  NONE    ,"    ",nmhcjx  ,"OK 、未完成"      },	//031
    {Character,STR040, 83,8,1, 2,"   ",  NONE    ,"    ",dyhcjx  ,"OK 、未完成"      },	//032
    {Character,STR041, 83,8,1, 2,"   ",  NONE    ,"    ",zyyljx  ,"OK 、未完成"      },	//033
    {Character,STR042, 83,8,1, 2,"   ",  NONE    ,"    ",ryjcjx  ,"OK 、未完成"      },	//034
    {Character,STR043, 83,8,1, 2,"   ",  NONE    ,"    ",bjjcjx  ,"OK 、未完成"      },	//035
    {Character,STR044, 83,8,1, 2,"   ",  NONE    ,"    ",zcegjx  ,"OK 、未完成"      },	//036
    {Character,STR045, 19+1,3+2,2, 5,"     ",NONE    ,"    ",swpcbu  ,"PXXXX 、CXXXX 、BXXXX 、UXXXX 其中 0<=XXXX<=4000"},	//037
    {Character,STR046, 20+1,3+2,1, 8,"     ",NONE    ,"    ",ryxizt  ,"OL 、CL 、OL-Drive 、OL-Fault 、CL-Fault 、--"},	//038
    {Character,STR047, 20+1,4+2,1, 8,"     ",NONE    ,"    ",ryxizt  ,"OL 、CL 、OL-Drive 、OL-Fault 、CL-Fault 、--"},	//039
    {Numeric  ,STR048, 21+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//040
    {Numeric  ,STR049, 22+1,3+2,1, 0,"%3.0f",flqwd   ,"℃  ",NONE    ,"-40<=data<=215"   },	//041
    {Numeric  ,STR050, 23+1,3+2,1, 0,"%3.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//042
    {Numeric  ,STR051, 24+1,3+2,1, 0,"%3.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//043
    {Numeric  ,STR052, 25+1,3+2,1, 0,"%3.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//044
    {Numeric  ,STR053, 26+1,3+2,1, 0,"%3.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//045
    {Numeric  ,STR054, 27+1,3+2,1, 0,"%3.0f",ygyl    ,"kPa ",NONE    ,"0<=data<=765"     },	//046
    {Numeric  ,STR055, 28+1,3+2,1, 0,"%3.0f",qgjdyl  ,"kPa ",NONE    ,"0<=data<=255"     },	//047
    {Numeric  ,STR056, 29+1,3+2,2, 0,"%5.2f",fdjzs   ,"Rpm ",NONE    ,"0<=data<=16383"   },	//048
    {Numeric  ,STR057, 30+1,3+2,1, 0,"%3.0f",qgjdyl  ,"Km/H",NONE    ,"0<=data<=255"     },	//049
    {Numeric  ,STR058, 31+1,3+2,1, 0,"%2.2f",qgdhtqj ,"BTDC",NONE    ,"-64<=data<=64"  },	//050
    {Numeric  ,STR059, 32+1,3+2,1, 0,"%3.0f",flqwd   ,"℃  ",NONE    ,"-40<=data<=215"   },	//051
    {Numeric  ,STR060, 33+1,3+2,2, 0,"%3.2f",zlkqll  ,"g/s ",NONE    ,"0<=data<=655.35"  },	//052
    {Numeric  ,STR061, 34+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//053
    {Character,STR062, 35+1,3+2,1, 4,"     ",NONE    ,"    ",zleckqps,"-- 、UPS 、DNS 、OFF 、DIAG"},	//054
    {Character,STR063, 36+1,3+2,1, 5,"     ",NONE    ,"    ",ycgqwz  ,"B1:S1 、B1:S2 、B1:S3 、B1:S4 、B2:S1 、B2:S2 、B2:S3 、B2:S4 、--"},	//055
    {Numeric  ,STR064, 37+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//056
    {Numeric  ,STR065, 37+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//057
    {Numeric  ,STR066, 38+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//058
    {Numeric  ,STR067, 38+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//059
    {Numeric  ,STR068, 39+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//060
    {Numeric  ,STR069, 39+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//061
    {Numeric  ,STR070, 40+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//062
    {Numeric  ,STR071, 40+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//063
    {Numeric  ,STR072, 41+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//064
    {Numeric  ,STR073, 41+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//065
    {Numeric  ,STR074, 42+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//066
    {Numeric  ,STR075, 42+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//067
    {Numeric  ,STR076, 43+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//068
    {Numeric  ,STR077, 43+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//069
    {Numeric  ,STR078, 44+1,3+2,1, 0,"%1.2f",ycgqdy  ,"V   ",NONE    ,"0<=data<=1.28"    },	//070
    {Numeric  ,STR079, 44+1,4+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//071
    {Character,STR080, 45+1,3+2,1,18,"     ",NONE    ,"    ",obdqq   ,"OBD 、OBD and OBD II 、OBDI 、NO OBD 、EOBD 、EOBD AND OBDII 、EOBD AND OBD 、EOBD,OBD AND OBDII 、JOBD 、JOBD AND OBDII 、JOBD AND EOBD"},	//072
    {Character,STR081, 46+1,3+2,1, 5,"     ",NONE    ,"    ",ycgq1   ,"B1:S1 、B1:S2 、B2:S1 、B2:S2 、B3:S1 、B3:S2 、B4:S1 、B4:S2 、--"},	//073
    {Character,STR082, 47+1,3+2,1, 2,"     ",NONE    ,"    ",ptozt   ,"ON 、OFF"},	//074
    {Numeric  ,STR083, 48+1,3+2,2, 0,"%5.0f",fdjqdsj ,"sec ",NONE    ,"0<=data<=65535"   },	//075
    {Numeric  ,STR084, 50+1,3+2,2, 0,"%5.0f",fdjqdsj ,"Km  ",NONE    ,"0<=data<=65535"   },	//076
    {Numeric  ,STR085, 51+1,3+2,2, 0,"%4.2f",qgzkyl  ,"kPa ",NONE    ,"0<=data<=5177.27" },	//077
    {Numeric  ,STR086, 52+1,3+2,2, 0,"%6.0f",ygyl1   ,"kPa ",NONE    ,"0<=data<=655350"  },	//078
    {Numeric  ,STR087, 53+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//079
    {Numeric  ,STR088, 53+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//080
    {Numeric  ,STR089, 54+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//081
    {Numeric  ,STR090, 54+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//082
    {Numeric  ,STR091, 55+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//083
    {Numeric  ,STR092, 55+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//084
    {Numeric  ,STR093, 56+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//085
    {Numeric  ,STR094, 56+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//086
    {Numeric  ,STR095, 57+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//087
    {Numeric  ,STR096, 57+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//088
    {Numeric  ,STR097, 58+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//089
    {Numeric  ,STR098, 58+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//090
    {Numeric  ,STR099, 59+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//091
    {Numeric  ,STR100, 59+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//092
    {Numeric  ,STR101, 60+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//093
    {Numeric  ,STR102, 60+1,5+2,2, 0,"%1.5f",ycgqdy1 ,"V   ",NONE    ,"0<=data<=8"       },	//094
    {Numeric  ,STR103, 61+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//095
    {Numeric  ,STR104, 62+1,3+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//096
    {Numeric  ,STR105, 63+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//097
    {Numeric  ,STR106, 64+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//098
    {Numeric  ,STR107, 65+1,3+2,1, 0,"%3.0f",qgjdyl  ,"    ",NONE    ,"0<=data<=255"     },	//099
    {Numeric  ,STR108, 66+1,3+2,2, 0,"%5.0f",fdjqdsj ,"Km  ",NONE    ,"0<=data<=65535"   },	//100
    {Numeric  ,STR109, 67+1,3+2,1, 0,"%4.0f",ryzqyl  ,"pa  ",NONE    ,"-8192<=data<=8128"},	//101
    {Numeric  ,STR110, 68+1,3+2,1, 0,"%3.0f",qgjdyl  ,"kPa ",NONE    ,"0<=data<=255"     },	//102
    {Numeric  ,STR111, 69+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//103
    {Numeric  ,STR112, 69+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//104
    {Numeric  ,STR113, 70+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//105
    {Numeric  ,STR114, 70+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//106
    {Numeric  ,STR115, 71+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//107
    {Numeric  ,STR116, 71+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//108
    {Numeric  ,STR117, 72+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//109
    {Numeric  ,STR118, 72+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//110
    {Numeric  ,STR119, 73+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//111
    {Numeric  ,STR120, 73+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//112
    {Numeric  ,STR121, 74+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//113
    {Numeric  ,STR122, 74+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//114
    {Numeric  ,STR123, 75+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//115
    {Numeric  ,STR124, 75+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//116
    {Numeric  ,STR125, 76+1,3+2,2, 0,"%1.5f",dlb     ,"    ",NONE    ,"0<=data<=2"       },	//117
    {Numeric  ,STR126, 76+1,5+2,1, 0,"%3.2f",ycgqdl  ,"mA  ",NONE    ,"-128<=data<=128"  },	//118
    {Numeric  ,STR127, 77+1,3+2,2, 0,"%4.1f",chjwd   ,"℃  ",NONE    ,"-40<=data<=6513.5"},	//119
    {Numeric  ,STR128, 78+1,3+2,2, 0,"%4.1f",chjwd   ,"℃  ",NONE    ,"-40<=data<=6513.5"},	//120
    {Numeric  ,STR129, 79+1,3+2,2, 0,"%4.1f",chjwd   ,"℃  ",NONE    ,"-40<=data<=6513.5"},	//121
    {Numeric  ,STR130, 80+1,3+2,2, 0,"%4.1f",chjwd   ,"℃  ",NONE    ,"-40<=data<=6513.5"},	//122
    {Numeric  ,STR131, 83+1,3+2,2, 0,"%2.3f",kzmkdy  ,"V   ",NONE    ,"0<=data<=65.53"   },	//123
    {Numeric  ,STR132, 84+1,3+2,2, 0,"%5.2f",jdfhz   ,"    ",NONE    ,"0<=data<=25700"   },	//124
    {Numeric  ,STR133, 85+1,3+2,2, 0,"%1.5f",dlb     ,"%%  ",NONE    ,"0<=data<=2"       },	//125
    {Numeric  ,STR134, 86+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//126
    {Numeric  ,STR135, 87+1,3+2,1, 0,"%3.0f",flqwd   ,"℃  ",NONE    ,"-40<=data<=215"   },	//127
    {Numeric  ,STR136, 88+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//128
    {Numeric  ,STR137, 89+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//129
    {Numeric  ,STR138, 90+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//130
    {Numeric  ,STR139, 91+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//131
    {Numeric  ,STR140, 92+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//132
    {Numeric  ,STR141, 93+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//133
    {Numeric  ,STR142, 94+1,3+2,2, 0,"%5.0f",fdjqdsj ,"m   ",NONE    ,"0<=data<=65535"   },	//134
    {Numeric  ,STR143, 95+1,3+2,2, 0,"%5.0f",fdjqdsj ,"m   ",NONE    ,"0<=data<=65535"   },	//135
    {Character,STR144, 98+1,3+2,1, 7,"     ",NONE    ,"    ",rllx    ,"GAS 、METH 、ETH 、DSL 、LPG 、CNG 、PROP 、ELEC 、BI_GAS 、BI_METH 、BI_ETH 、BI_LPG 、BI_CNG 、BI_PROP 、BI_ELEC 、ISO/SAE"},	//136
    {Numeric  ,STR145, 99+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//137
    {Numeric  ,STR146,100+1,3+2,2, 0,"%3.2f",yyzqyl  ,"Kpa ",NONE    ,"0<=data<=327.68"  },	//138
    {Numeric  ,STR147,101+1,3+2,2, 0,"%5.0f",zqpfxtyl,"pa  ",NONE    ,"0<=data<=32767"   },	//139
    {Numeric  ,STR148,102+1,3+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//140
    {Numeric  ,STR149,103+1,3+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//141
    {Numeric  ,STR150,104+1,3+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//142
    {Numeric  ,STR151,105+1,3+2,1, 0,"%2.2f",dqryxz  ,"%%  ",NONE    ,"-100<=data<=99.22"},	//143
    {Numeric  ,STR152,106+1,3+2,2, 0,"%5.0f",fdjqdsj1 ,"Kpa ",NONE    ,"0<=data<=65535"   },//144
    {Numeric  ,STR153,107+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//145
    {Numeric  ,STR154,108+1,3+2,1, 0,"%3.2f",fhjsz   ,"%%  ",NONE    ,"0<=data<=100"     },	//146
    {Numeric  ,STR155,109+1,3+2,1, 0,"%5.0f",flqwd   ,"℃  ",NONE    ,"-40<=data<=215"   },	//147
    {Numeric  ,STR156,110+1,3+2,2, 0,"%3.2f",pyzs    ,"`   ",NONE    ,"0<=data<=511.99"  },	//148
    {Numeric  ,STR157,111+1,3+2,2, 0,"%4.2f",fdjgyl  ,"L/h ",NONE    ,"0<=data<=3276.75" },	//149
    {Numeric  ,STR158,112+1,3+2,1, 0,"%3.1f",clpfyq  ,"    ",NONE    ,"-125<=data<=130"  },	//150
};


void ISO14230_4Setting(KLINETabTypeDef *tab,u32 Baud)
{
    u8 i=0,j,data,Num;
    u32 cidvalue = 0;
    ITStatus wubool;//v2.2 添加，为了区分14230激活方式
    char str[100];
    ABdef AB[2] = {
        {6,10},
        {8,14},
    };
    ERRORType err;
    IRQVar.acctiveflag = RESET;
    IRQVar.acctivecnt = 0;
    IRQVar.KCPT = tab;
    KL_LINE_Config(Baud);
    KL_LINE_Enable(K_LINE);
    CAN_ITConfig(CAN1, CAN_IT_FMP0, DISABLE);
    while(CotrolVale != SYSEND && CotrolVale != SYS01 && CotrolVale != SYS02 && CotrolVale != SYS03 && CotrolVale != SYS04 &&
            CotrolVale != SYS07)
    {
        if (CotrolVale == SYS05)
        {
            printf(STR166);
            IRQVar.LEN = 0;
            IRQVar.acctivecnt = 0;
            IRQVar.acctiveflag = RESET;
            CotrolVale = SYSXX;
            wubool = SET;
        }
        else if (CotrolVale == SYS06)
        {
            printf(STR167);
            IRQVar.LEN = 0;
            IRQVar.acctivecnt = 0;
            IRQVar.acctiveflag = RESET;
            CotrolVale = SYSXX;
            wubool = RESET;
        }
        else if (CotrolVale == SYSDTC || CotrolVale == SYSDTC1)
        {
            if (CotrolVale == SYSDTC)
            {
                i = 0;
            }
            else if (CotrolVale == SYSDTC1)
            {
                i = 1;
            }
            switch(SetDTCRAM(&ATCmd[AB[i].A],DTCRAM))
            {
            case ERR0:
                printf(STR000);
                printf("\r\n");
                break;
            case ERR1:
                printf(STR002);
                break;
            default:
                SetDTCTab(DTCRAM,AB[i].B,iso14230);
                if (CotrolVale == SYSDTC)
                {
                    printf(STR003);
                }
                else if (CotrolVale == SYSDTC1)
                {
                    printf(STR004);
                }
                else if (CotrolVale == SYSDTC2)
                {
                    printf(STR005);
                }
                ClearRAM((u8*)str,100);
                strncpy(str,(char*)&ATCmd[AB[i].A+3],DTCRAM[0]*6);
                printf((const char*)str);
                printf("\r\n");
                ClearRAM((u8*)DTCRAM,21);
                ClearRAM((u8*)str,100);
                ClearRAM((u8*)ATCmd,100);
                break;
            }
            CotrolVale = SYSXX;
        }
        else if (CotrolVale == SYSDS)
        {
            Num = GetDSNumber(&ATCmd[6],&err,3);
            if (err == ERR0)
            {
                printf(STR000);
                printf("\r\n");
                CotrolVale = SYSXX;
                ClearRAM((u8*)ATCmd,100);
                ClearRAM((u8*)DSRAM,2);
                continue;
            }
            if (DSOLDNUM != Num)
            {
                if (DSControl14230[Num].ByteNum == 1)
                {
                    Count = tab->KTXCMD[DSControl14230[Num].Y].data[DSControl14230[Num].X];
                }
                else if (DSControl14230[Num].ByteNum == 2)
                {
                    Count = tab->KTXCMD[DSControl14230[Num].Y].data[DSControl14230[Num].X]<<8 | tab->KTXCMD[DSControl14230[Num].Y].data[DSControl14230[Num].X+1];
                }
                DSOLDNUM = Num;
            }
            for (i = 0; i < DSControl14230[Num].ByteNum; i++)
            {
                DSRAM[i] = tab->KTXCMD[DSControl14230[Num].Y].data[DSControl14230[Num].X + i];
            }
            err = SetDSRAM(ATCmd,DSControl14230,DSRAM,SET);
            if (err == ERR0)
            {
                printf(STR000);
                printf(STR009);
                printf("\"\r\n");
                CotrolVale = SYSXX;
                ClearRAM((u8*)ATCmd,100);
                ClearRAM((u8*)DSRAM,2);
                continue;
            }
            else if (err == ERR1)
            {
                printf(STR000);
                printf(STR160);
                printf(DSControl14230[Num].range);
                printf("\r\n");
                CotrolVale = SYSXX;
                ClearRAM((u8*)ATCmd,100);
                ClearRAM((u8*)DSRAM,2);
                continue;
            }
            for (i = 0; i < DSControl14230[Num].ByteNum; i++)
            {
                tab->KTXCMD[DSControl14230[Num].Y].data[DSControl14230[Num].X + i] = DSRAM[i];
            }
            CotrolVale = SYSXX;
            ClearRAM((u8*)ATCmd,100);
            ClearRAM((u8*)DSRAM,2);
        }
        else if (CotrolVale == SYSSETDS)
        {
            Num = GetDSNumber(&ATCmd[8],&err,3);
            if (err == ERR0)
            {
                printf(STR000);
                printf("\r\n");
                CotrolVale = SYSXX;
                ClearRAM((u8*)ATCmd,100);
                ClearRAM((u8*)DSRAM,2);
                continue;
            }
            Count = GetDSNumber(&ATCmd[12],&err,5);
            err = SetDSRAM(ATCmd,DSControl14230,DSRAM,RESET);
            if (err == ERR0 || err == ERR1)
            {
                printf(STR000);
                printf(STR160);
                printf(DSControl14230[Num].range);
                printf("\r\n");
                CotrolVale = SYSXX;
                ClearRAM((u8*)ATCmd,100);
                ClearRAM((u8*)DSRAM,2);
                continue;
            }
            for (i = 0; i < DSControl14230[Num].ByteNum; i++)
            {
                tab->KTXCMD[DSControl14230[Num].Y].data[DSControl14230[Num].X + i] = DSRAM[i];
            }
            CotrolVale = SYSXX;
            ClearRAM((u8*)ATCmd,100);
            ClearRAM((u8*)DSRAM,2);
            if(Flagspeedw == SET)
            {
                SpeedCount = IRQVar.KCPT->KTXCMD[30].data[6];
            }
        }
        else if (CotrolVale == SYSOFF)
        {
            printf(STR169);
            CotrolVale = SYSEND;
        }
        else if (CotrolVale == SYSSS)
        {
            printf(STR170);
            CotrolVale = SYSXX;
            SpeedCount = IRQVar.KCPT->KTXCMD[30].data[6];
            Flagspeedw = SET;
        }
        else if (CotrolVale == SYSSE)
        {
            printf(STR171);
            CotrolVale = SYSXX;
            Flagspeedw = RESET;
        }
        else if (CotrolVale == SYSVIN)
        {
            ClearRAM((u8*)VINRAM,20);
            if(strstr((const char *)&ATCmd[11],"OFF") == NULL)
            {
                tab->KTXCMD[4].nf = 5;
                tab->KTXCMD[4].data[3] = 0x49;
                tab->KTXCMD[4].data[4] = 0x02;
                tab->KTXCMD[4].data[5] = 0x01;
                if (CheckASCII(&ATCmd[7],17,VINRAM) == ERR0)
                {
                    printf(STR161);
                    printf("\r\n");
                    CotrolVale = SYSXX;
                    ClearRAM((u8*)ATCmd,100);
                    continue;
                }
                for (j = 0; j < 4; j++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        tab->KTXCMD[4+j].data[6+i] = VINRAM[i+j*4];
                    }
                }
                tab->KTXCMD[8].data[6] = VINRAM[16];
                printf(STR162);
                printf((const char*)VINRAM);
                printf("\r\n");
            }
            else
            {
                tab->KTXCMD[4].nf = 1;
                tab->KTXCMD[4].data[3] = 0x7f;
                tab->KTXCMD[4].data[4] = 0x09;
                tab->KTXCMD[4].data[5] = 0x11;
                tab->KTXCMD[4].data[6] = 0x00;
                tab->KTXCMD[4].data[7] = 0x00;
                tab->KTXCMD[4].data[8] = 0x00;
                tab->KTXCMD[4].data[9] = 0x00;
                printf(STR162);
                printf("Not Supported\r\n");
            }
            CotrolVale = SYSXX;
            ClearRAM((u8*)ATCmd,100);
            ClearRAM((u8*)VINRAM,21);
        }
        else if(CotrolVale == SYSCALID1)
        {
            ClearRAM((u8*)CIDRAM1,20);
            if(strstr((const char *)&ATCmd[10],"OFF") == NULL)
            {
                for(i = 0; i < 16; i++)
                {
                    CIDRAM1[i] = ATCmd[i+10];
                }
                tab->KTXCMD[121].nf = 4;
                tab->KTXCMD[121].data[3] = 0x49;
                tab->KTXCMD[121].data[4] = 0x04;
                tab->KTXCMD[121].data[5] = 0x01;
                for (j = 0; j < 4; j++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        tab->KTXCMD[121+j].data[6+i] = CIDRAM1[i+j*4];
                    }
                }
                printf(STR172);
                printf((const char*)CIDRAM1);
                printf("\r\n");
            }
            else
            {
                tab->KTXCMD[121].nf = 1;
                tab->KTXCMD[121].data[3] = 0x7f;
                tab->KTXCMD[121].data[4] = 0x09;
                tab->KTXCMD[121].data[5] = 0x11;
                tab->KTXCMD[121].data[6] = 0x00;
                tab->KTXCMD[121].data[7] = 0x00;
                tab->KTXCMD[121].data[8] = 0x00;
                tab->KTXCMD[121].data[9] = 0x00;
                printf(STR172);
                printf("Not Supported\r\n");
            }
            CotrolVale = SYSXX;
            ClearRAM((u8*)CIDRAM1,20);
        }
        else if (CotrolVale == SYSCALCVN1)
        {
            ClearRAM((u8*)CVNRAM1,10);
            if(strstr((const char *)&ATCmd[11],"OFF") == NULL)
            {
                for(i = 0; i < 8; i++)
                {
                    CVNRAM1[i] = ATCmd[11+i];
                }
                HexStrToByte((const char *)CVNRAM1, (unsigned char*)&cidvalue, 8);
                tab->KTXCMD[139].nf = 1;
                tab->KTXCMD[139].data[3] = 0x49;
                tab->KTXCMD[139].data[4] = 0x06;
                tab->KTXCMD[139].data[5] = 0x01;
                tab->KTXCMD[139].data[6] = cidvalue & 0xff;;
                tab->KTXCMD[139].data[7] = cidvalue>>8 & 0xff;
                tab->KTXCMD[139].data[8] = cidvalue>>16 & 0xff;
                tab->KTXCMD[139].data[9] = cidvalue>>24 & 0xff;
                printf(STR173);
                printf((const char*)CVNRAM1);
                printf("\r\n");
            }
            else
            {
                tab->KTXCMD[139].nf = 1;
                tab->KTXCMD[139].data[3] = 0x7f;
                tab->KTXCMD[139].data[4] = 0x09;
                tab->KTXCMD[139].data[5] = 0x11;
                tab->KTXCMD[139].data[6] = 0x00;
                tab->KTXCMD[139].data[7] = 0x00;
                tab->KTXCMD[139].data[8] = 0x00;
                tab->KTXCMD[139].data[9] = 0x00;
                printf(STR173);
                printf("Not Supported\r\n");
            }
            CotrolVale = SYSXX;
            ClearRAM((u8*)CVNRAM1,10);
        }
        else if (CotrolVale == SYSECUNAME)
        {
            ClearRAM((u8*)ECUNAMERAM,25);
            if(strstr((const char *)&ATCmd[11],"OFF") == NULL)
            {
                for(i = 0; i < 20; i++)
                {
                    ECUNAMERAM[i] = ATCmd[11+i];
                }
                tab->KTXCMD[129].nf = 5;
                tab->KTXCMD[129].data[3] = 0x49;
                tab->KTXCMD[129].data[4] = 0x0A;
                tab->KTXCMD[129].data[5] = 0x01;
                for (j = 0; j < 5; j++)
                {
                    for (i = 0; i < 4; i++)
                    {
                        tab->KTXCMD[129+j].data[6+i] = ECUNAMERAM[i+j*4];
                    }
                }								
                printf(STR174);
                printf((const char*)ECUNAMERAM);
                printf("\r\n");
            }
            else
            {
                tab->KTXCMD[129].nf = 1;
                tab->KTXCMD[129].data[3] = 0x7f;
                tab->KTXCMD[129].data[4] = 0x09;
                tab->KTXCMD[129].data[5] = 0x11;
                tab->KTXCMD[129].data[6] = 0x00;
                tab->KTXCMD[129].data[7] = 0x00;
                tab->KTXCMD[129].data[8] = 0x00;
                tab->KTXCMD[129].data[9] = 0x00;
                printf(STR174);
                printf("Not Supported\r\n");
            }
            CotrolVale = SYSXX;
            ClearRAM((u8*)ECUNAMERAM,25);
        }
        if (IRQVar.flag == SET && IRQVar.acctiveflag == 4 && wubool == RESET
                || IRQVar.flag == SET && IRQVar.acctiveflag == 3 && wubool == SET)
        {
            USART_ITConfig(KL_LINE,USART_IT_RXNE,DISABLE);
            for (i = 0; i < IRQVar.KCPT->KTXCMD[IRQVar.KCPT->KRXCMD[IRQVar.CPS].REQ].nf; i++)
            {
                delay_ms(30);
                Send_KWP2000Frame((u8*)(&IRQVar.KCPT->KTXCMD[IRQVar.KCPT->KRXCMD[IRQVar.CPS].REQ]+i)+1);
            }
            IRQVar.flag = RESET;
            USART_ITConfig(KL_LINE,USART_IT_RXNE,ENABLE);
            delay_ms(2);
            data = data;
            data = KL_LINE->DR;
            data = KL_LINE->SR;
            IRQVar.LEN = 0;
            IRQVar.acctivecnt = 0;
        }
        else if (IRQVar.acctiveflag == 2 && wubool==SET)
        {
            IRQVar.acctiveflag = 3;
            IRQVar.flag = RESET;
            IRQVar.acctivecnt = 0;
            USART_ITConfig(KL_LINE,USART_IT_RXNE,DISABLE);
            delay_ms(600);
            USART_SendData(KL_LINE, 0x55);
            delay_ms(10);
            USART_SendData(KL_LINE, 0xE9);
            delay_ms(10);
            USART_SendData(KL_LINE, 0x8F);
            USART_ITConfig(KL_LINE,USART_IT_RXNE,ENABLE);
            delay_ms(2);
            IRQVar.LEN = 0;
        }
        else if(IRQVar.acctiveflag == 1 && wubool==RESET)
        {
            IRQVar.acctiveflag = 4;
            IRQVar.acctivecnt = 0;
            IRQVar.LEN = 0;
        }
        else if (IRQVar.acctiveflag == 1 && wubool==SET && KL_LINE->DR !=0)
        {
            IRQVar.acctivecnt = 0;
            IRQVar.LEN = 0;
            data = KL_LINE->DR;
        }
    }
}
/************************************************************************
  * @描述:  设置ISO14230故障码命令
  * @参数:  u8 *dtcram,u8 p		1517
  * @返回值: NONE
  **********************************************************************/
void SetISO14230CmdTabRam(u8 *dtcram,u8 p)
{
    u8 i,j,c = 0;
    for (j = 0; j < 4; j++)
    {
        for (i = 0; i < 3; i++)
        {
            IRQVar.KCPT->KTXCMD[p+j].data[4+i*2] = 0;
            IRQVar.KCPT->KTXCMD[p+j].data[5+i*2] = 0;
        }
    }
    if (dtcram[0] < 3)
    {
        for (i = 0; i < dtcram[0]; i++)
        {
            IRQVar.KCPT->KTXCMD[p].data[4+i*2] = dtcram[1+i*2];
            IRQVar.KCPT->KTXCMD[p].data[5+i*2] = dtcram[2+i*2];
        }

    }
    else
    {
        if (dtcram[0]%3 != 0)
        {
            IRQVar.KCPT->KTXCMD[p].nf = dtcram[0]/3+1;
        }
        else
        {
            IRQVar.KCPT->KTXCMD[p].nf = dtcram[0]/3;
        }
        for	(j = 0; j < IRQVar.KCPT->KTXCMD[p].nf; j++)
        {
            for(i = 0; i < 3; i++)
            {
                IRQVar.KCPT->KTXCMD[p+j].data[4+i*2] = dtcram[1+i*2+j*6];
                IRQVar.KCPT->KTXCMD[p+j].data[5+i*2] = dtcram[2+i*2+j*6];
                if(++c >= dtcram[0])
                {
                    break;
                }
            }
        }
    }
}








































