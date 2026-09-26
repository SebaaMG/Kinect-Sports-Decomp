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


void fn_829AD1B8(int *param_1,char *param_2,uint param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  
  if ((((param_3 < 0xc) || (*param_2 != 'A')) || (param_2[1] != 'd')) ||
     (((param_2[2] != 'o' || (param_2[3] != 'b')) || (param_2[4] != 'e')))) {
    *(undefined4 *)(*param_1 + 0x14) = 0x4e;
    *(uint *)(*param_1 + 0x18) = param_3 + param_4;
    (**(code **)(*param_1 + 4))(param_1,1);
  }
  else {
    bVar1 = param_2[9];
    bVar2 = param_2[5];
    bVar3 = param_2[6];
    bVar4 = param_2[10];
    bVar5 = param_2[0xb];
    iVar6 = *param_1;
    *(uint *)(iVar6 + 0x1c) = (uint)(byte)param_2[7] * 0x100 + (uint)(byte)param_2[8];
    *(uint *)(iVar6 + 0x18) = (uint)bVar2 * 0x100 + (uint)bVar3;
    *(uint *)(iVar6 + 0x20) = (uint)bVar1 * 0x100 + (uint)bVar4;
    *(uint *)(iVar6 + 0x24) = (uint)bVar5;
    *(undefined4 *)(*param_1 + 0x14) = 0x4c;
    (**(code **)(*param_1 + 4))(param_1,1);
    *(byte *)(param_1 + 0x4b) = bVar5;
    param_1[0x4a] = 1;
  }
  return;
}

