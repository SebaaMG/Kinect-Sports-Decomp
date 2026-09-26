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
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_82440B28();
extern int fn_82440D08();
extern int fn_82441D38();
extern unsigned int uStack00000030;
extern unsigned int uStack00000038;


void fn_824465C8(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  undefined8 uStack00000030;
  undefined8 uStack00000038;
  ulonglong auStack_50 [2];
  undefined1 auStack_40 [40];
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  auStack_50[0] = (ulonglong)(uint)puVar1[1] + 0xff & 0xff;
  uStack00000030 = param_3;
  uStack00000038 = param_4;
  fn_82440B28((double)(float)puVar1[2],
                    (double)((float)auStack_50[0] * *(float *)(*(int *)*puVar1 + 4)),auStack_40);
  puVar2 = (undefined8 *)
           fn_82440D08((double)(float)(*(undefined4 **)(param_1 + 8))[2],auStack_50,
                         **(undefined4 **)(param_1 + 8));
  fn_82441D38(param_1,param_2,*puVar2,(ulonglong)*(uint *)(puVar2 + 1) << 0x20);
  return;
}

