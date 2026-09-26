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


void fn_827BC6B8(int *param_1,char *param_2,uint param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  param_4 = param_3 + param_4;
  if ((((param_3 < 0xe) || (*param_2 != 'J')) || (param_2[1] != 'F')) ||
     (((param_2[2] != 'I' || (param_2[3] != 'F')) || (param_2[4] != '\0')))) {
    if (((param_3 < 6) || (*param_2 != 'J')) ||
       ((param_2[1] != 'F' || (((param_2[2] != 'X' || (param_2[3] != 'X')) || (param_2[4] != '\0')))
        ))) {
      uVar3 = 0x4d;
    }
    else {
      cVar1 = param_2[5];
      if (cVar1 != '\x10') {
        if (cVar1 == '\x11') {
          iVar2 = *param_1;
          uVar3 = 0x6d;
LAB_827bc904:
          *(undefined4 *)(iVar2 + 0x14) = uVar3;
          *(int *)(*param_1 + 0x18) = param_4;
        }
        else {
          iVar2 = *param_1;
          if (cVar1 == '\x13') {
            uVar3 = 0x6e;
            goto LAB_827bc904;
          }
          *(undefined4 *)(iVar2 + 0x14) = 0x59;
          *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[5];
          *(int *)(*param_1 + 0x1c) = param_4;
        }
        iVar2 = *param_1;
        goto LAB_827bc948;
      }
      uVar3 = 0x6c;
    }
    *(undefined4 *)(*param_1 + 0x14) = uVar3;
    *(int *)(*param_1 + 0x18) = param_4;
  }
  else {
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(char *)((int)param_1 + 0x101) = param_2[5];
    *(char *)((int)param_1 + 0x102) = param_2[6];
    *(char *)((int)param_1 + 0x103) = param_2[7];
    *(ushort *)(param_1 + 0x41) = (ushort)(byte)param_2[8] * 0x100 + (ushort)(byte)param_2[9];
    *(ushort *)((int)param_1 + 0x106) =
         (ushort)(byte)param_2[10] * 0x100 + (ushort)(byte)param_2[0xb];
    if (*(char *)((int)param_1 + 0x101) != '\x01') {
      *(undefined4 *)(*param_1 + 0x14) = 0x77;
      *(uint *)(*param_1 + 0x18) = (uint)*(byte *)((int)param_1 + 0x101);
      *(uint *)(*param_1 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x102);
      (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
    }
    iVar2 = *param_1;
    *(uint *)(iVar2 + 0x18) = (uint)*(byte *)((int)param_1 + 0x101);
    *(uint *)(iVar2 + 0x1c) = (uint)*(byte *)((int)param_1 + 0x102);
    *(uint *)(iVar2 + 0x20) = (uint)*(ushort *)(param_1 + 0x41);
    *(uint *)(iVar2 + 0x24) = (uint)*(ushort *)((int)param_1 + 0x106);
    *(uint *)(iVar2 + 0x28) = (uint)*(byte *)((int)param_1 + 0x103);
    *(undefined4 *)(*param_1 + 0x14) = 0x57;
    (**(code **)(*param_1 + 4))(param_1,1);
    if (param_2[0xd] != '\0' || param_2[0xc] != '\0') {
      *(undefined4 *)(*param_1 + 0x14) = 0x5a;
      *(uint *)(*param_1 + 0x18) = (uint)(byte)param_2[0xc];
      *(uint *)(*param_1 + 0x1c) = (uint)(byte)param_2[0xd];
      (**(code **)(*param_1 + 4))(param_1,1);
    }
    if (param_4 + -0xe == (uint)(byte)param_2[0xd] * (uint)(byte)param_2[0xc] * 3) {
      return;
    }
    *(undefined4 *)(*param_1 + 0x14) = 0x58;
    *(int *)(*param_1 + 0x18) = param_4 + -0xe;
  }
  iVar2 = *param_1;
LAB_827bc948:
  (**(code **)(iVar2 + 4))(param_1,1);
  return;
}

