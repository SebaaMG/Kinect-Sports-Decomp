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
extern int fn_829AB0F0();
extern int fn_829AF1A8();
extern int fn_829AF1E8();
extern int fn_829AF4C8();
extern int fn_829AF638();
extern int fn_829AF870();
extern int fn_829AF8C8();
extern int fn_829AFB90();
extern int fn_829AFFF0();
extern int fn_829B0290();
extern int fn_829B0738();


void fn_829B0D78(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x5dc) == 0) {
    fn_829AB0F0(param_1,0xffffffff820525dc);
  }
  if ((*(uint *)(param_1 + 0x560) & 0x1000) != 0) {
    if (*(char *)(param_1 + 0x5f8) == '\x03') {
      fn_829AFFF0(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1,
                    *(undefined4 *)(param_1 + 0x604),*(undefined4 *)(param_1 + 0x65c),
                    *(undefined2 *)(param_1 + 0x60a));
    }
    else {
      iVar1 = param_1 + 0x660;
      if (*(short *)(param_1 + 0x60a) == 0) {
        iVar1 = 0;
      }
      fn_829B0290(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1,iVar1);
    }
  }
  if (((*(uint *)(param_1 + 0x560) & 0x2000) != 0) && (*(char *)(param_1 + 0x616) != '\x03')) {
    fn_829AFB90(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1,
                  *(undefined4 *)(param_1 + 0x638),*(undefined4 *)(param_1 + 0x644),
                  *(undefined4 *)(param_1 + 0x62c));
  }
  if ((*(uint *)(param_1 + 0x560) & 0x400) != 0) {
    fn_829AF870(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1);
  }
  if (((*(uint *)(param_1 + 0x560) & 0x40) != 0) &&
     (fn_829B0738(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1,
                    *(undefined4 *)(param_1 + 0x674),*(undefined4 *)(param_1 + 0x678)),
     *(int *)(param_1 + 0x5f4) == 0)) {
    fn_829AB0F0(param_1,0xffffffff820525b8);
  }
  if ((*(uint *)(param_1 + 0x560) & 8) != 0) {
    fn_829AF638(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1,param_1 + 0x655);
  }
  if ((*(uint *)(param_1 + 0x560) & 4) != 0) {
    fn_829AF4C8(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1);
  }
  if ((*(uint *)(param_1 + 0x560) & 1) != 0) {
    fn_829AF1E8(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1);
  }
  if ((*(uint *)(param_1 + 0x560) & 0x8000) != 0) {
    fn_829AF8C8(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1,
                  *(undefined2 *)(param_1 + 0x61e),*(undefined4 *)(param_1 + 0x55c));
  }
  if ((*(uint *)(param_1 + 0x560) & 0x10) != 0) {
    fn_829AF1A8(param_1 + 0x5f0,(ulonglong)*(uint *)(param_1 + 0x5dc) + 1);
  }
  return;
}

