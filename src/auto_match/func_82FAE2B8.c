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
extern int fn_82FB0820();
extern int fn_83007DF0();


undefined8 fn_82FAE2B8(int param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar2;
  undefined8 uVar1;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x7c);
  if (iVar3 != *(int *)(param_1 + 0x80)) {
    do {
      cVar2 = fn_82FB0820(*(undefined4 *)(iVar3 + 4),param_2,param_3);
      if (cVar2 != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 8;
    } while (iVar3 != *(int *)(param_1 + 0x80));
  }
  uVar1 = fn_83007DF0(param_1,param_2,param_3,0);
  return uVar1;
}

