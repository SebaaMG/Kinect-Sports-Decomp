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
extern int fn_8265CA20();
extern int fn_828AF0E0();
extern int fn_828AF5C0();


int * fn_828AFC00(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  if (param_1 != param_2) {
    puVar5 = (undefined4 *)*param_2;
    puVar6 = (undefined4 *)param_2[1];
    uVar2 = ((int)puVar6 - (int)puVar5) / 0xc;
    if (uVar2 == 0) {
      fn_828AF5C0();
    }
    else {
      puVar4 = (undefined4 *)*param_1;
      uVar1 = (param_1[1] - (int)puVar4) / 0xc;
      if (uVar1 < uVar2) {
        if ((uint)((param_1[2] - (int)puVar4) / 0xc) < uVar2) {
          if (puVar4 != (undefined4 *)0x0) {
            fn_8265CA20(puVar4);
          }
          cVar3 = fn_828AF0E0(param_1,(param_2[1] - *param_2) / 0xc);
          if (cVar3 == '\0') {
            return param_1;
          }
          puVar6 = (undefined4 *)param_2[1];
          puVar5 = (undefined4 *)*param_1;
          for (puVar4 = (undefined4 *)*param_2; puVar4 != puVar6; puVar4 = puVar4 + 3) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar4;
              puVar5[1] = puVar4[1];
              puVar5[2] = puVar4[2];
            }
            puVar5 = puVar5 + 3;
          }
        }
        else {
          puVar6 = puVar5 + uVar1 * 3;
          for (; puVar5 != puVar6; puVar5 = puVar5 + 3) {
            *puVar4 = *puVar5;
            puVar4[1] = puVar5[1];
            puVar4[2] = puVar5[2];
            puVar4 = puVar4 + 3;
          }
          puVar4 = (undefined4 *)param_2[1];
          puVar5 = (undefined4 *)param_1[1];
          if (puVar6 != puVar4) {
            do {
              if (puVar5 != (undefined4 *)0x0) {
                *puVar5 = *puVar6;
                puVar5[1] = puVar6[1];
                puVar5[2] = puVar6[2];
              }
              puVar6 = puVar6 + 3;
              puVar5 = puVar5 + 3;
            } while (puVar6 != puVar4);
            param_1[1] = (int)puVar5;
            return param_1;
          }
        }
        param_1[1] = (int)puVar5;
      }
      else {
        for (; puVar5 != puVar6; puVar5 = puVar5 + 3) {
          *puVar4 = *puVar5;
          puVar4[1] = puVar5[1];
          puVar4[2] = puVar5[2];
          puVar4 = puVar4 + 3;
        }
        param_1[1] = ((param_2[1] - *param_2) / 0xc) * 0xc + *param_1;
      }
    }
  }
  return param_1;
}

