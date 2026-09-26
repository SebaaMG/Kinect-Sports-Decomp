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
extern int fn_83005030();
extern int fn_83005078();
extern int fn_83005090();


undefined8 fn_83001588(int param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  byte *pbVar7;
  
  pbVar7 = (byte *)*param_2;
  bVar1 = *pbVar7;
  *param_2 = pbVar7 + 1;
  bVar2 = pbVar7[1];
  *param_2 = pbVar7 + 2;
  uVar6 = *(undefined2 *)(pbVar7 + 2);
  *param_2 = pbVar7 + 4;
  *(undefined2 *)(param_1 + 0x32) = uVar6;
  pbVar7 = (byte *)*param_2;
  bVar3 = *pbVar7;
  *param_2 = pbVar7 + 1;
  bVar4 = pbVar7[1];
  *param_2 = pbVar7 + 2;
  bVar5 = pbVar7[2];
  *param_2 = pbVar7 + 3;
  *(ushort *)(param_1 + 0x6c) = (ushort)bVar1;
  fn_83005030(param_1,bVar2 != 0);
  *(ushort *)(param_1 + 0x6e) = (ushort)bVar3;
  fn_83005078(param_1,bVar4 != 0,bVar3);
  fn_83005090(param_1,bVar5 != 0);
  return 1;
}

