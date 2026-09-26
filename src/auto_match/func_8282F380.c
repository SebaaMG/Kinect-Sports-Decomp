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
extern int fn_828223C8();
extern int fn_828252D0();
extern int fn_828252D8();
extern int fn_8282F248();
extern unsigned int lbl_8201ED80;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_8282F380(longlong param_1)

{
  float fVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 *puVar4;
  double dVar5;
  int aiStack_50 [2];
  undefined4 uStack_48;
  undefined4 uStack_44;
  ulonglong uStack_40;
  ulonglong uStack_38;
  
  fn_828223C8(param_1 + 0x2f4,aiStack_50);
  if (aiStack_50[0] != 0) {
    dVar5 = (double)lbl_8201ED80;
    do {
      iVar2 = aiStack_50[0];
      uStack_40 = (ulonglong)*(uint *)(aiStack_50[0] + 0x1c);
      puVar4 = (undefined4 *)(aiStack_50[0] + 0x1c);
      uStack_38 = uStack_40 + 0xb & 0xffffffff;
      fVar1 = (float)((double)uStack_40 * dVar5);
      if ((float)((double)uStack_40 * dVar5) <= (float)uStack_38) {
        fVar1 = (float)uStack_38;
      }
      uStack_44 = (undefined4)(longlong)fVar1;
      uStack_48 = uStack_44;
      uVar3 = fn_828252D0();
      fn_8282F248(*(undefined4 *)(iVar2 + 0x20),*puVar4,uVar3,&uStack_48);
      fn_828252D8(*(undefined4 *)(iVar2 + 0x20));
      *(int *)(iVar2 + 0x20) = (int)uVar3;
      *puVar4 = uStack_48;
      fn_828223C8(aiStack_50[0],aiStack_50);
    } while (aiStack_50[0] != 0);
  }
  return;
}

