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
extern int fn_82F1FD80();
extern int fn_82F434B0();


void fn_82F0E340(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xaf0);
  uVar2 = *(undefined4 *)(param_2 + 0x10c);
  if ((iVar1 == 0) || (iVar1 == 4)) {
    (**(code **)(param_1 + 0x1ff8))
              (param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 0x108),uVar2,0,0,0,
               *(undefined4 *)(param_2 + 0x288));
  }
  else if ((*(int *)(param_1 + 0x84c) == 0) || (iVar1 == 1)) {
    fn_82F434B0(param_1,*(undefined4 *)(param_2 + 0x108),uVar2,*(undefined4 *)(param_2 + 0x118),
                    *(undefined4 *)(param_2 + 0x288),*(undefined4 *)(param_2 + 0x28c),
                    *(undefined4 *)(param_2 + 0x290),
                    (ulonglong)*(uint *)(param_1 + 0x4a94) + (ulonglong)*(uint *)(param_2 + 0x25c));
  }
  else if (iVar1 == 2) {
    fn_82F1FD80(param_1,*(undefined4 *)(param_2 + 0x108),uVar2,
                      *(undefined4 *)(param_2 + 0x118),0,0,0,*(undefined4 *)(param_2 + 0x288));
  }
  return;
}

