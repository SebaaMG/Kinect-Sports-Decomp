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
extern int fn_82B47118();
extern int fn_82B477E0();
extern int fn_82B52FF8();
extern int fn_82B53448();
extern int fn_82B841E8();
extern int fn_82B8F328();


int fn_82B53520(int param_1,int param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  
  uVar1 = *(uint *)(param_1 + 0x234);
  if ((*(uint *)(uVar1 + 0x24) & 1) == 0) {
    uVar2 = *(uint *)(uVar1 + 0x20) & 0xfffffffe;
    iVar4 = uVar2 - 0x28;
    if ((iVar4 != 0) && ((*(uint *)(uVar2 - 0x20) & 0x3f80) == 0x2980)) goto LAB_82b5361c;
  }
  if ((*(uint *)(param_1 + 0x28) & 0x40000) == 0) {
    if ((*(uint *)(param_1 + 0x2c) & 0x2000000) != 0) {
      if (uVar1 == (-(uint)((*(uint *)(param_1 + 4) & 1) == 0) & *(uint *)(param_1 + 4)))
      goto LAB_82b5359c;
    }
  }
  else {
LAB_82b5359c:
    uVar3 = fn_82B477E0(param_1);
    fn_82B8F328(*(undefined4 *)(param_1 + 0x234),uVar3,param_1);
    *(int *)(param_1 + 0x234) = (int)uVar3;
  }
  iVar4 = fn_82B841E8(param_1,(ulonglong)*(uint *)(param_1 + 0x234),
                            (ulonglong)*(uint *)(param_1 + 0x234) + 0x20,0x53,0,0);
  if (*(int *)(*(int *)(param_2 + 4) + 0x28) != 0) {
    fn_82B52FF8(param_1,param_3,*(undefined4 *)(*(int *)(param_2 + 4) + 0x10),
                  *(undefined4 *)(*(int *)(param_2 + 4) + 0x38),iVar4);
  }
  fn_82B53448(param_1,*(undefined4 *)(param_2 + 4),param_3,iVar4);
LAB_82b5361c:
  fn_82B47118(param_1,iVar4,param_2);
  return iVar4;
}

