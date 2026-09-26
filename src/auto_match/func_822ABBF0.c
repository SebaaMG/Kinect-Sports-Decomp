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
extern int fn_82381BC0();


void fn_822ABBF0(int param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *apuStack_20 [2];
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  apuStack_20[0] = (undefined4 *)*puVar1;
  while( true ) {
    if (apuStack_20[0] == puVar1) {
      return;
    }
    iVar2 = (**(code **)(*param_2 + 4))(param_2,apuStack_20[0][4]);
    if (iVar2 == 0) break;
    fn_82381BC0(apuStack_20);
  }
  return;
}

