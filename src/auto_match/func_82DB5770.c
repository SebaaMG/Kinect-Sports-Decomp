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
extern int fn_82CE3DC8();
extern int fn_82CEA0E8();
extern int fn_82CFF8D0();


void fn_82DB5770(int param_1,int *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if ((*(uint *)(param_1 + 0x38) & 0x80000000) == 0) {
    uVar1 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x30),
                              ((ulonglong)*(uint *)(param_1 + 0x38) & 0x3fffffff) * 0x70);
    (**(code **)(*param_2 + 0x14))
              (param_2,3,0xffffffff82142398,*(undefined4 *)(param_1 + 0x30),
               (ulonglong)*(uint *)(param_1 + 0x34) * 0x70,uVar1);
  }
  (**(code **)(*param_2 + 0xc))(param_2,0xffffffff82142384,*(undefined4 *)(param_1 + 0x48),0);
  uVar1 = fn_82CEA0E8(param_1 + 0x3c);
  uVar2 = fn_82CFF8D0(*(undefined4 *)(param_1 + 0x3c),uVar1);
  (**(code **)(*param_2 + 0x14))
            (param_2,1,0xffffffff8214235c,*(undefined4 *)(param_1 + 0x3c),uVar1,uVar2);
  fn_82CE3DC8(param_1,param_2,0xffffffff8323d5d0);
  return;
}

