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
extern int fn_822315A0();
extern int fn_82246748();
extern int fn_8229E090();
extern int fn_824C04E0();


void fn_82481178(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 2) {
    *(undefined4 *)(param_2 + 0xbc) = 0;
  }
  else {
    fn_8229E090(*(undefined4 *)(param_2 + 0xbc),0,0);
    *(undefined4 *)(param_2 + 0xbc) = 0;
    if (param_1 == 0) {
      if (*(int *)(param_2 + 0xa8) == 3) {
        *(undefined4 *)(*(int *)(param_2 + 0x48) + 0x30) = 0;
        *(undefined4 *)(param_2 + 0x74) = 1;
        *(undefined4 *)(param_2 + 0x4c) = 1;
      }
      iVar1 = *(int *)(param_2 + 0xa4);
      if (iVar1 != 0) {
        iVar2 = *(int *)(iVar1 + 0x6c);
        *(undefined4 *)(iVar1 + 0x6c) = 0;
        *(undefined4 *)(iVar1 + 0x68) = 0;
        if (iVar2 != 0) {
          fn_822315A0();
        }
        if (*(int *)(iVar1 + 0x48) != 0) {
          fn_82246748(*(int *)(iVar1 + 0x48),0);
        }
        fn_824C04E0(iVar1,1);
      }
    }
  }
  return;
}

