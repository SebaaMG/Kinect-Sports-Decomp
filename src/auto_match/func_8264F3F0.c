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
extern int fn_82643AC0();
extern int fn_82643B08();


void fn_8264F3F0(uint param_1,uint param_2,uint param_3,uint *param_4,uint param_5)

{
  uint uVar1;
  uint *puVar2;
  longlong lVar3;
  
  param_4[5] = param_1;
  param_4[1] = 0;
  param_4[2] = 0x80;
  param_4[3] = 0;
  param_4[4] = 0;
  *param_4 = 0;
  fn_82643B08(param_4);
  puVar2 = (uint *)param_4[3];
  if ((uint *)param_4[4] < puVar2 + 2) {
    puVar2 = (uint *)fn_82643B08(param_4);
  }
  puVar2[1] = param_2;
  *puVar2 = param_3 | param_5;
  param_4[3] = (uint)(puVar2 + 2);
  fn_82643AC0(param_4);
  uVar1 = *param_4;
  if (uVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = ((ulonglong)(uVar1 >> 0x14) + 0x200 & 0x1000) + ((ulonglong)uVar1 & 0x1fffffff) +
            -0x40000000;
  }
  KeInsertQueueDpc(*(int *)(param_1 + 0x2c3c) * 0x6c + param_1 + 0x2c60,lVar3,0);
  return;
}

