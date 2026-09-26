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
extern int fn_8265CA20();
extern int fn_82E1D478();
extern int fn_82E1DAA0();
extern int fn_82E1DE08();
extern int fn_82E1DE60();
extern int fn_82E1DF00();
extern int fn_82E1E288();
extern int fn_82E1E498();
extern int fn_82E1F2C8();
extern int fn_82E1FEC0();
extern int fn_82E20048();
extern int fn_82E20100();
extern int fn_82E20490();


void fn_82E1D5F8(int param_1)

{
  char *pcVar3;
  char cVar4;
  ulonglong uVar1;
  undefined8 uVar2;
  char *pcVar5;
  
  fn_82E20490();
  pcVar3 = (char *)fn_82E1DE08(*(undefined4 *)(param_1 + 8),0xffffffff8214b7f0,
                                     0xffffffff82196582);
  pcVar5 = pcVar3;
  do {
    cVar4 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar4 != '\0');
  if ((int)pcVar5 - (int)pcVar3 != 1) {
    fn_82E20048();
  }
  cVar4 = fn_82E1DF00(*(undefined4 *)(param_1 + 8),0xffffffff8214b7e4,1);
  if (cVar4 != '\0') {
    uVar1 = fn_82E20100(0xffffffff8214b7d8,0);
    cVar4 = fn_82E1E288(*(undefined4 *)(param_1 + 8),uVar1);
    if (cVar4 == '\0') {
      fn_82E1DAA0(*(undefined4 *)(param_1 + 8));
    }
    if ((uVar1 & 0xffffffff) != 0) {
      fn_8265CA20(uVar1);
    }
  }
  cVar4 = fn_82E1DF00(*(undefined4 *)(param_1 + 8),0xffffffff8214b7c4,0);
  if (cVar4 == '\0') {
    uVar2 = fn_82E1DE08(*(undefined4 *)(param_1 + 8),0xffffffff8214b7bc,0xffffffff821a6774);
    fn_82E1FEC0(*(undefined4 *)(param_1 + 0x10),uVar2);
  }
  fn_82E1F2C8(*(undefined4 *)(param_1 + 0xc));
  cVar4 = fn_82E1E498(*(undefined4 *)(param_1 + 0xc));
  if (cVar4 == '\0') {
    fn_82E1D478(param_1,0,0);
  }
  uVar1 = fn_82E1DE08(*(undefined4 *)(param_1 + 8),0xffffffff8214b7b0,0);
  while ((uVar1 & 0xffffffff) != 0) {
    fn_82E1D478(param_1,uVar1,0);
    uVar1 = fn_82E1DE60(*(undefined4 *)(param_1 + 8));
  }
  uVar1 = fn_82E1DE08(*(undefined4 *)(param_1 + 8),0xffffffff8214b7a8,0);
  while ((uVar1 & 0xffffffff) != 0) {
    fn_82E1D478(param_1,uVar1,1);
    uVar1 = fn_82E1DE60(*(undefined4 *)(param_1 + 8));
  }
  return;
}

