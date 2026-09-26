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
extern unsigned int *auStack_3c;
extern int fn_8265CA20();
extern int fn_828B3E88();
extern int fn_828D5420();
extern int fn_828D8138();
extern int fn_828D8190();
extern int fn_828D81E8();
extern unsigned int uStack_40;


uint * fn_828D8260(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  char cVar7;
  uint uVar6;
  undefined4 *puVar8;
  ulonglong uVar9;
  uint uVar10;
  undefined1 uStack_40;
  undefined1 auStack_3c [60];
  
  if (param_1 != param_2) {
    uVar2 = *param_2;
    uVar10 = *param_1;
    uVar6 = (int)(param_2[1] - uVar2) / 0x1c;
    if (uVar6 == 0) {
      fn_828D81E8(auStack_3c,param_1,uVar10,param_1[1]);
    }
    else {
      uVar3 = param_1[1];
      uVar1 = (int)(uVar3 - uVar10) / 0x1c;
      if (uVar1 < uVar6) {
        if ((uint)((int)(param_1[2] - uVar10) / 0x1c) < uVar6) {
          if (uVar10 != 0) {
            for (; uVar10 != uVar3; uVar10 = uVar10 + 0x1c) {
              fn_828B3E88(uVar10 + 4);
              fn_8265CA20(*(undefined4 *)(uVar10 + 4));
              *(undefined4 *)(uVar10 + 4) = 0;
            }
            fn_8265CA20(*param_1);
          }
          cVar7 = fn_828D5420(param_1,(int)(param_2[1] - *param_2) / 0x1c);
          if (cVar7 == '\0') {
            return param_1;
          }
          uVar6 = *param_1;
          uVar9 = (ulonglong)*param_2;
        }
        else {
          uVar9 = (longlong)(int)uVar1 * 0x1c + (ulonglong)uVar2;
          fn_828D8138((ulonglong)uVar2,uVar9);
          uVar6 = param_1[1];
        }
        uVar6 = fn_828D8190(uVar9,param_2[1],uVar6,param_1 + 3,uStack_40);
        param_1[1] = uVar6;
      }
      else {
        puVar5 = (undefined4 *)fn_828D8138();
        puVar4 = (undefined4 *)param_1[1];
        if (puVar5 != puVar4) {
          puVar5 = puVar5 + 1;
          do {
            fn_828B3E88(puVar5);
            fn_8265CA20(*puVar5);
            *puVar5 = 0;
            puVar8 = puVar5 + 6;
            puVar5 = puVar5 + 7;
          } while (puVar8 != puVar4);
        }
        param_1[1] = ((int)(param_2[1] - *param_2) / 0x1c) * 0x1c + *param_1;
      }
    }
  }
  return param_1;
}

