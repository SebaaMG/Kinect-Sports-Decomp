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
extern int fn_82E406B8();
extern unsigned int uStack_40;


undefined8 fn_82E40EC8(int param_1,int *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uStack_40;
  longlong alStack_38 [7];
  
  uStack_40 = 0;
  uVar2 = 0;
  if (param_2 == (int *)0x0) {
    uVar1 = 0xffffffff80004003;
  }
  else if (((*(uint *)(param_1 + 0x44) & 1) == 0) && (*(int *)(param_1 + 0x48) != 0)) {
    uVar1 = (**(code **)(*param_2 + 0x10))(param_2,&uStack_40);
    if ((-1 < (int)uVar1) && (uStack_40 != 0)) {
      do {
        alStack_38[0] = 0;
        uVar1 = fn_82E406B8(param_1,param_2,uVar2,alStack_38);
        if ((int)uVar1 < 0) {
          return 0;
        }
        uVar2 = alStack_38[0] + uVar2;
      } while (uVar2 < uStack_40);
    }
  }
  else {
    uVar1 = 0xffffffffc00d36bb;
  }
  return uVar1;
}

