typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_828FA8D8();
extern int fn_829371F8();
extern int fn_8293DE90();
extern int fn_8293F5D8();


longlong fn_8293F7D8(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                      undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  longlong lVar9;
  
  pcVar7 = (char *)param_2[2];
  pcVar6 = "xvs_3_0";
  pcVar8 = pcVar7;
  do {
    cVar1 = *pcVar8;
    cVar2 = *pcVar6;
    if (cVar1 == '\0') break;
    pcVar8 = pcVar8 + 1;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 == cVar2);
  pcVar8 = "xps_3_0";
  do {
    cVar3 = *pcVar7;
    cVar4 = *pcVar8;
    if (cVar3 == '\0') break;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
  } while (cVar3 == cVar4);
  if (((*param_2 == 9) && (cVar1 == cVar2)) || (cVar3 == cVar4)) {
    puVar5 = (undefined4 *)fn_8265C940(0x150,0x24810000);
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[0x19] = 0;
      puVar5[0x4e] = 0;
      puVar5[0x4f] = 0;
      puVar5[0x20] = 0;
      puVar5[0x1f] = 1;
      puVar5[0x13] = 0;
      puVar5[0x14] = 0;
    }
    if (puVar5 == (undefined4 *)0x0) {
      lVar9 = -0x7ff8fff2;
    }
    else {
      lVar9 = fn_8293F5D8(puVar5,param_1,param_3,cVar3 == cVar4,param_4,param_6);
      if (-1 < lVar9) {
        lVar9 = fn_8293DE90(puVar5,param_5,param_6);
      }
      fn_829371F8(puVar5);
      fn_8265C990(puVar5,0x24810000);
    }
  }
  else {
    fn_828FA8D8(param_4,param_2,0x7d1,0xffffffff82034210);
    lVar9 = -0x7789f4a7;
  }
  return lVar9;
}

