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
extern int fn_82ACAFD8();
extern int fn_82B16ED0();


undefined8
fn_82B19C90(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4,int param_5,
             undefined8 param_6,ulonglong param_7,int param_8)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if ((((param_7 & 0x18) == 0) ||
      ((*(int *)(param_5 + 0x1c) == *(int *)(param_2 + 0x1c) &&
       (((param_7 & 0x10) == 0 || (*(int *)(param_8 + 0x1c) == *(int *)(param_2 + 0x1c))))))) &&
     (((*(uint *)(*(int *)(param_2 + 0x1c) + 0x4c) ^ *(uint *)(*(int *)(param_8 + 0x1c) + 0x4c)) &
      0x7ffff) == 0)) {
    iVar1 = fn_82B16ED0(param_2,param_3);
    iVar2 = fn_82B16ED0(param_5,param_6);
    if (iVar1 == iVar2) {
      cVar3 = fn_82ACAFD8(param_5);
      if (cVar3 != '\0') {
        for (iVar1 = *(int *)(param_5 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
          if ((*(int *)(iVar1 + 0x10) != 0) && (*(int *)(iVar1 + 0x10) != param_8)) {
            return 0;
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

