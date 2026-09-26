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
#define ZEXT48(x) ((U64)((U32)(x)))
extern unsigned int *auStack_18;
extern int fn_82F72DD0();
extern int fn_82F72F40();
extern int fn_82F73228();
extern int fn_82F73680();
extern int fn_82F75998();
extern unsigned int lbl_82169B90;
extern unsigned int *lbl_832635C0;
extern unsigned int lbl_832635D0;
extern unsigned int uStack_20;


undefined8 * fn_82F75CD0(undefined8 *param_1)

{
  char cVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 uStack_20;
  undefined1 auStack_18 [8];
  
  if ((~lbl_832635D0 & 1) == 0) {
    uVar3 = ZEXT48(lbl_82169B90) + 2;
  }
  else {
    uVar3 = ZEXT48(lbl_82169B90);
  }
  fn_82F72F40(&uStack_20,uVar3);
  cVar1 = *lbl_832635C0;
  if (cVar1 == '\0') {
    fn_82F72DD0(&uStack_20,1);
  }
  else {
    lbl_832635C0 = lbl_832635C0 + 1;
    if (cVar1 == '0') {
      fn_82F73680(&uStack_20,0xffffffff8202f48c);
    }
    else if (cVar1 == '2') {
      uVar2 = fn_82F75998(auStack_18);
      fn_82F73228(&uStack_20,uVar2);
    }
    else if (cVar1 == '5') {
      *(undefined1 *)((int)param_1 + 5) = 0;
      *(undefined1 *)((int)param_1 + 4) = 2;
      *(undefined4 *)param_1 = 0;
      return param_1;
    }
  }
  fn_82F73680(&uStack_20,0xffffffff8209a968);
  *param_1 = uStack_20;
  return param_1;
}

