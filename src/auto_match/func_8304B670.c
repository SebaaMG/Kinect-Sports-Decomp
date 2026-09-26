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
extern int fn_8304D678();
extern int fn_8304D690();


undefined8 fn_8304B670(int param_1,uint *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar1 = (ulonglong)*(uint *)(param_1 + 0x38);
  uVar3 = (ulonglong)*(uint *)(param_1 + 0x28);
  uVar4 = 0x2d;
  uVar2 = (ulonglong)*(ushort *)(param_1 + 0x3c);
  uVar10 = (ulonglong)(*param_2 >> 6);
  lVar5 = 0;
  uVar6 = 0;
  uVar9 = ((uVar3 - uVar1 & 0x3ffffff) << 6) / uVar2;
  trapWord(6,uVar2,0);
  uVar8 = uVar10;
  do {
    if (uVar8 == 0) {
LAB_8304b790:
      *param_2 = uVar6;
      trapWord(6,(ulonglong)*(ushort *)(param_1 + 0x3c),0);
      fn_8304D690(param_1,uVar9,
                      (((ulonglong)*(uint *)(param_1 + 0x34) & 0x3ffffff) << 6) /
                      (ulonglong)*(ushort *)(param_1 + 0x3c));
      return uVar4;
    }
    trapWord(6,uVar2,0);
    if (*(short *)(param_1 + 0x1c) == 1) {
      uVar2 = ((*(uint *)(param_1 + 0x34) - uVar3) + uVar1 & 0xffffffff) / uVar2;
      if (uVar2 <= (uVar10 & 0xffffffff)) {
        uVar4 = 0x11;
        uVar10 = uVar2;
      }
LAB_8304b76c:
      lVar7 = (uVar10 & 0x3ffffff) * 0x40;
      fn_8304D678(param_1,uVar9,lVar7 + uVar9);
      uVar6 = (int)lVar7 + (int)lVar5;
      *(uint *)(param_1 + 0x28) =
           (uint)*(ushort *)(param_1 + 0x3c) * (int)uVar10 + *(int *)(param_1 + 0x28);
      goto LAB_8304b790;
    }
    uVar8 = (*(uint *)(param_1 + 0x30) - uVar3 & 0xffffffff) / uVar2;
    if ((uVar10 & 0xffffffff) < uVar8) goto LAB_8304b76c;
    lVar7 = (uVar8 & 0x3ffffff) * 0x40;
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x2c);
    fn_8304D678(param_1,uVar9,lVar7 + uVar9);
    uVar3 = (ulonglong)*(uint *)(param_1 + 0x28);
    uVar1 = (ulonglong)*(uint *)(param_1 + 0x38);
    lVar5 = lVar7 + lVar5;
    uVar6 = (uint)lVar5;
    uVar2 = (ulonglong)*(ushort *)(param_1 + 0x3c);
    uVar10 = uVar10 - uVar8;
    trapWord(6,uVar2,0);
    uVar9 = ((uVar3 - uVar1 & 0x3ffffff) << 6) / uVar2;
    if (*(short *)(param_1 + 0x1c) != 0) {
      *(short *)(param_1 + 0x1c) = *(short *)(param_1 + 0x1c) + -1;
    }
    uVar8 = uVar10 & 0xffffffff;
  } while( true );
}

