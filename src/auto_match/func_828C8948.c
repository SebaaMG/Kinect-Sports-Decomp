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
extern unsigned int *auStack_30;
extern int fn_8265C9E0();
extern int fn_82886518();
extern int fn_8288F1E8();
extern int fn_828940C0();
extern int fn_828B5580();
extern int fn_828BE158();
extern int fn_828CBE98();


undefined8 fn_828C8948(int param_1)

{
  undefined4 uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  undefined1 auStack_30 [48];
  
  uVar2 = fn_8288F1E8(*(undefined4 *)(param_1 + 0x6c),param_1 + 0x84);
  if ((uVar2 & 0xffffffff) == 0) {
    uVar2 = fn_8265C9E0(0xa8);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x80);
      uVar3 = fn_828B5580(auStack_30,param_1 + 0x84);
      uVar3 = fn_828CBE98(uVar2,uVar3,uVar1);
    }
    fn_82886518(uVar3,0xffffffffffffffff,0xffffffffffffffff);
    fn_828BE158(*(undefined4 *)(param_1 + 0x6c),uVar3,*(undefined4 *)(param_1 + 0x18),0);
  }
  else {
    fn_828940C0(uVar2,*(undefined4 *)(param_1 + 0x18),*(uint *)(param_1 + 0x80) & 0xff);
  }
  return 1;
}

