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
extern int fn_82F02410();


void fn_82E85718(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0x500) == 0) {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),0,1);
  }
  else {
    fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),1,1);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x544)) {
      puVar2 = (undefined4 *)(param_1 + 0x4f8);
      do {
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),puVar2[5],0x12);
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),puVar2[6],0x12);
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),puVar2[3],0xe);
        puVar2 = puVar2 + 4;
        fn_82F02410(*(undefined4 *)(param_1 + 0x1ebc),*puVar2,0xe);
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x544));
    }
  }
  return;
}

