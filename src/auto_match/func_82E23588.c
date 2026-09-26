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
extern unsigned int __imp__ExEventObjectType;


undefined8 fn_82E23588(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  int in_r13;
  
  param_1[3] = param_3;
  param_1[1] = 0;
  param_1[2] = 0;
  *param_2 = 0x3e5;
  param_2[6] = 0;
  param_2[1] = 0;
  if (param_2[4] == 0) {
    if (param_2[3] != 0) {
      iVar1 = ObReferenceObjectByHandle(param_2[3],__imp__ExEventObjectType,param_1 + 2);
      if (iVar1 < 0) {
        return 6;
      }
      *(undefined4 *)(param_1[2] + 4) = 0;
    }
  }
  else {
    iVar1 = ExAllocatePoolWithTag(0x28,0x70617350);
    param_1[1] = iVar1;
    if (iVar1 == 0) {
      return 8;
    }
    ObReferenceObject(*(undefined4 *)(in_r13 + 0x100));
    KeInitializeApc(param_1[1],*(undefined4 *)(in_r13 + 0x100),0xffffffff82e23528,0xffffffff82e23528
                    ,0xffffffff82e23560,1,param_2);
  }
  *param_1 = param_2;
  return 0;
}

