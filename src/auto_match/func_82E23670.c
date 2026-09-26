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


undefined8 fn_82E23670(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  *(undefined4 *)(*param_1 + 4) = param_4;
  *(undefined4 *)(*param_1 + 0x18) = param_3;
  sync(0);
  *(undefined4 *)*param_1 = param_2;
  if (param_1[1] == 0) {
    if (param_1[2] != 0) {
      KeSetEvent(param_1[2],0,0);
      ObDereferenceObject(param_1[2]);
    }
  }
  else {
    iVar1 = KeInsertQueueApc(param_1[1],0,0,0);
    if (iVar1 == 0) {
      iVar1 = param_1[1];
      ObDereferenceObject(*(undefined4 *)(iVar1 + 4));
      ExFreePool(iVar1);
    }
  }
  *param_1 = 0;
  return 0;
}

