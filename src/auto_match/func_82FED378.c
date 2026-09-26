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
extern int fn_82FA5190();
extern int fn_8301D0D8();
extern int fn_83021E70();
extern int fn_830245A0();
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC770;
extern unsigned int lbl_831BC794;
extern unsigned int lbl_831BC798;
extern unsigned int lbl_831BC79C;
extern unsigned int lbl_831BC7A8;


void fn_82FED378(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)*param_1;
  puVar3 = (undefined4 *)0x0;
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    if (puVar2[4] == 2) {
      fn_830245A0(param_1 + 4);
      puVar1 = lbl_831BC794;
      puVar5 = lbl_831BC794;
      puVar6 = (undefined4 *)0x0;
      while (puVar4 = puVar1, puVar4 != (undefined4 *)0x0) {
        if (puVar2[5] == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(*(int *)(puVar2[5] + 0xfc) + 8);
        }
        if (puVar4[1] == iVar8) {
          puVar1 = (undefined4 *)*puVar4;
          puVar7 = puVar1;
          if (puVar4 != puVar5) {
            *puVar6 = puVar1;
            puVar7 = lbl_831BC794;
          }
          lbl_831BC794 = puVar7;
          if (puVar4 == lbl_831BC798) {
            lbl_831BC798 = puVar6;
          }
          *puVar4 = lbl_831BC79C;
          lbl_831BC7A8 = lbl_831BC7A8 + -1;
          puVar5 = lbl_831BC794;
          lbl_831BC79C = puVar4;
        }
        else {
          puVar1 = (undefined4 *)*puVar4;
          puVar6 = puVar4;
        }
      }
      puVar1 = (undefined4 *)*puVar2;
      if (puVar2 == (undefined4 *)*param_1) {
        *param_1 = puVar1;
      }
      else {
        *puVar3 = puVar1;
      }
      if (puVar2 == (undefined4 *)param_1[1]) {
        param_1[1] = puVar3;
      }
      param_1[2] = param_1[2] + -1;
      fn_8301D0D8(puVar2 + 2);
      fn_83021E70(puVar2 + 0x6b);
      puVar2[0x68] = &lbl_8217D040;
      fn_82FA5190(lbl_831BC770,puVar2);
    }
    else {
      puVar1 = (undefined4 *)*puVar2;
      puVar3 = puVar2;
    }
  }
  return;
}

