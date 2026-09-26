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
extern int fn_828F5B70();
extern int fn_828F8968();


undefined8 fn_828F8E78(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  int aiStack_30 [8];
  
  if (*(int *)(param_1 + 0x74) == 0) {
    uVar2 = 0xffffffff8876086c;
  }
  else {
    do {
      uVar2 = fn_828F8968(param_1,aiStack_30);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
    } while (aiStack_30[0] != 0xd);
    iVar1 = *(int *)(param_1 + 0x74);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 4);
    *(undefined4 *)(iVar1 + 4) = 0;
    fn_828F5B70(iVar1,1);
    if (*(undefined4 **)(param_1 + 0x74) == (undefined4 *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = **(undefined4 **)(param_1 + 0x74);
    }
    *(undefined4 *)(param_1 + 0x2a0) = uVar3;
    uVar2 = 0;
  }
  return uVar2;
}

