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
extern int fn_82526C70();
extern int fn_82529508();
extern int fn_82558210();
extern int fn_82587B68();


void fn_825D9FB0(double param_1,undefined2 *param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  fn_82529508();
  *param_2 = 0x5e0;
  fn_82558210(param_2,7);
  puVar2 = (undefined4 *)fn_82587B68(10);
  fn_82526C70(param_2 + 0x21,0x40,0xffffffff821c4dd0,*puVar2);
  *(undefined4 *)(param_2 + 0x5a) = *(undefined4 *)(param_3 + 0x8bc);
  *(undefined4 *)(param_2 + 0x42) = *(undefined4 *)(param_3 + 0x4c);
  *(float *)(param_2 + 0x2ea) = (float)param_1;
  *(int *)(param_2 + 0x2e8) = param_3;
  *(undefined1 *)(param_2 + 0x2ec) = 0x80;
  *(undefined4 *)(param_2 + 0x2ee) = 0;
  puVar2 = (undefined4 *)(param_3 + 0xa0U & 0xfffffff0);
  uVar3 = puVar2[1];
  uVar4 = puVar2[2];
  uVar5 = puVar2[3];
  puVar1 = (undefined4 *)((uint)(param_2 + 0x2e0) & 0xfffffff0);
  *puVar1 = *puVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  return;
}

