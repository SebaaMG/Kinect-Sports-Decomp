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
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696480();
extern int fn_826972E0();
extern int fn_826C59F8();
extern int fn_826C7450();


void fn_826C8318(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  longlong lVar3;
  undefined8 uVar4;
  uint uVar5;
  double dVar6;
  
  puVar1 = *(undefined1 **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  lVar3 = fn_826C59F8(param_1);
  if ((lVar3 != 0) && (0 < *(int *)(param_1 + 0x1c))) {
    uVar2 = *(undefined4 *)(param_1 + 0x18);
    uVar4 = fn_826957D0(param_1,0);
    dVar6 = (double)fn_826972E0(uVar4,uVar2);
    uVar5 = fn_826C7450(lVar3,(ulonglong)(uint)(int)dVar6 + 0x4000);
    if (uVar5 != 0) {
      fn_82696480(*(undefined4 *)(param_1 + 4),
                        -(uint)((*(byte *)(uVar5 + 0x66) & 0x80) != 0) & uVar5);
    }
  }
  return;
}

