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
extern int fn_822A53D8();
extern int fn_82F68CC0();
extern unsigned int lbl_821B9328;


undefined4 * fn_824382F0(uint *param_1,uint *param_2,undefined4 *param_3)

{
  uint uVar1;
  char cVar2;
  ulonglong uVar3;
  int iVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  uint *puVar7;
  uint *puVar8;
  
  if (param_1 != param_2) {
    puVar5 = param_3 + 3;
    iVar4 = (int)param_3 - (int)param_1;
    puVar8 = param_1 + 1;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = &lbl_821B9328;
        puVar5[-1] = 0;
        puVar7 = (uint *)(iVar4 + (int)puVar8);
        *(undefined4 *)(iVar4 + (int)puVar8) = 0;
        *puVar5 = 0;
        cVar2 = fn_822A53D8(puVar7,(int)(puVar8[1] - *puVar8) / 0x5c);
        if (cVar2 != '\0') {
          uVar3 = (ulonglong)*puVar8;
          uVar1 = puVar8[1];
          uVar6 = (ulonglong)*puVar7;
          if (uVar3 != uVar1) {
            do {
              if ((uVar6 & 0xffffffff) != 0) {
                fn_82F68CC0(uVar6,uVar3,0x5c);
              }
              uVar3 = uVar3 + 0x5c;
              uVar6 = uVar6 + 0x5c;
            } while ((uVar3 & 0xffffffff) != (ulonglong)uVar1);
          }
          puVar7[1] = (uint)uVar6;
        }
        puVar5[2] = puVar8[4];
      }
      param_3 = param_3 + 6;
      puVar7 = puVar8 + 5;
      puVar5 = puVar5 + 6;
      puVar8 = puVar8 + 6;
    } while (puVar7 != param_2);
  }
  return param_3;
}

