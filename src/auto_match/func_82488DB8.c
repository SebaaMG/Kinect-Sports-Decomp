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
extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82231540();
extern int fn_822315A0();
extern int fn_82248AE8();
extern int fn_82365BD8();
extern int fn_82488FB8();
extern int fn_8265CA20();
extern unsigned int iStack_34;
extern unsigned int iStack_3c;


uint * fn_82488DB8(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char cVar7;
  ulonglong uVar8;
  undefined4 *puVar10;
  ulonglong uVar9;
  undefined1 auStack_40 [4];
  int iStack_3c;
  undefined1 auStack_38 [4];
  int iStack_34;
  
  if (param_1 != param_2) {
    uVar1 = *param_2;
    uVar8 = (ulonglong)uVar1;
    uVar2 = param_2[1];
    uVar5 = (int)(uVar2 - uVar1) >> 3;
    if (uVar5 == 0) {
      fn_82488FB8();
    }
    else {
      puVar10 = (undefined4 *)*param_1;
      uVar4 = (int)(param_1[1] - (int)puVar10) >> 3;
      if (uVar4 < uVar5) {
        if ((uint)((int)(param_1[2] - (int)puVar10) >> 3) < uVar5) {
          if (puVar10 != (undefined4 *)0x0) {
            fn_82231540();
            fn_8265CA20(*param_1);
          }
          cVar7 = fn_82248AE8(param_1,(int)(param_2[1] - *param_2) >> 3);
          if (cVar7 == '\0') {
            return param_1;
          }
          uVar1 = param_2[1];
          uVar8 = (ulonglong)*param_1;
          for (uVar9 = (ulonglong)*param_2; (uVar9 & 0xffffffff) != (ulonglong)uVar1;
              uVar9 = uVar9 + 8) {
            if ((uVar8 & 0xffffffff) != 0) {
              fn_82365BD8(uVar8,uVar9);
            }
            uVar8 = uVar8 + 8;
          }
        }
        else {
          uVar9 = ((ulonglong)uVar4 & 0x1fffffff) * 8 + uVar8;
          if ((ulonglong)uVar1 != (uVar9 & 0xffffffff)) {
            do {
              puVar6 = (undefined4 *)fn_82365BD8(auStack_38,uVar8);
              uVar3 = puVar6[1];
              puVar6[1] = puVar10[1];
              puVar10[1] = uVar3;
              uVar3 = *puVar6;
              *puVar6 = *puVar10;
              *puVar10 = uVar3;
              if (iStack_34 != 0) {
                fn_822315A0();
              }
              uVar8 = uVar8 + 8;
              puVar10 = puVar10 + 2;
            } while ((uVar8 & 0xffffffff) != (uVar9 & 0xffffffff));
          }
          uVar1 = param_2[1];
          uVar8 = (ulonglong)param_1[1];
          for (; (uVar9 & 0xffffffff) != (ulonglong)uVar1; uVar9 = uVar9 + 8) {
            if ((uVar8 & 0xffffffff) != 0) {
              fn_82365BD8(uVar8,uVar9);
            }
            uVar8 = uVar8 + 8;
          }
        }
        param_1[1] = (uint)uVar8;
      }
      else {
        if (uVar1 != uVar2) {
          do {
            puVar6 = (undefined4 *)fn_82365BD8(auStack_40,uVar8);
            uVar3 = puVar6[1];
            puVar6[1] = puVar10[1];
            puVar10[1] = uVar3;
            uVar3 = *puVar6;
            *puVar6 = *puVar10;
            *puVar10 = uVar3;
            if (iStack_3c != 0) {
              fn_822315A0();
            }
            uVar8 = uVar8 + 8;
            puVar10 = puVar10 + 2;
          } while ((uVar8 & 0xffffffff) != (ulonglong)uVar2);
        }
        fn_82231540(puVar10,param_1[1]);
        param_1[1] = ((int)(param_2[1] - *param_2) >> 3) * 8 + *param_1;
      }
    }
  }
  return param_1;
}

