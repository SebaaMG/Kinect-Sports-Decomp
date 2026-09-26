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
extern unsigned int *auStack_1c;
extern int fn_829548C8();
extern int fn_8295D0A8();
extern unsigned int uStack_20;


undefined8 fn_8295FD80(int *param_1)

{
  undefined8 uVar1;
  undefined4 uStack_20;
  undefined4 auStack_1c [3];
  
  uVar1 = fn_8295D0A8(param_1,0x26);
  if ((-1 < (int)uVar1) &&
     (uVar1 = (**(code **)(*param_1 + 0x148))
                        (param_1,*(undefined4 *)(**(int **)(param_1[0x41] + 8) * 4 + param_1[5]),
                         auStack_1c,&uStack_20), -1 < (int)uVar1)) {
    uVar1 = (**(code **)(*param_1 + 0x13c))(param_1,auStack_1c[0],0xe40000,uStack_20);
    if ((-1 < (int)uVar1) &&
       ((uVar1 = (**(code **)(*param_1 + 0x134))(param_1), -1 < (int)uVar1 &&
        (uVar1 = fn_829548C8(param_1), -1 < (int)uVar1)))) {
      uVar1 = 0;
    }
  }
  return uVar1;
}

