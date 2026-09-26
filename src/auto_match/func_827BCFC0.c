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


undefined8 fn_827BCFC0(int *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  puVar2 = (undefined4 *)param_1[6];
  pbVar6 = (byte *)*puVar2;
  iVar7 = puVar2[1];
  do {
    if (iVar7 == 0) {
      cVar3 = (*(code *)puVar2[3])(param_1);
      if (cVar3 == '\0') {
        return 0;
      }
      pbVar6 = (byte *)*puVar2;
      iVar7 = puVar2[1];
    }
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar7 = iVar7 + -1;
    if (bVar1 == 0xff) {
      do {
        if (iVar7 == 0) {
          cVar3 = (*(code *)puVar2[3])(param_1);
          if (cVar3 == '\0') {
            return 0;
          }
          pbVar6 = (byte *)*puVar2;
          iVar7 = puVar2[1];
        }
        bVar1 = *pbVar6;
        iVar7 = iVar7 + -1;
        pbVar6 = pbVar6 + 1;
      } while (bVar1 == 0xff);
      iVar5 = param_1[0x65];
      if (bVar1 != 0) {
        if (*(int *)(iVar5 + 0x14) != 0) {
          *(undefined4 *)(*param_1 + 0x14) = 0x74;
          *(undefined4 *)(*param_1 + 0x18) = *(undefined4 *)(param_1[0x65] + 0x14);
          *(uint *)(*param_1 + 0x1c) = (uint)bVar1;
          (**(code **)(*param_1 + 4))(param_1,0xffffffffffffffff);
          *(undefined4 *)(param_1[0x65] + 0x14) = 0;
        }
        param_1[0x5f] = (uint)bVar1;
        *puVar2 = pbVar6;
        puVar2[1] = iVar7;
        return 1;
      }
      iVar4 = *(int *)(iVar5 + 0x14) + 2;
    }
    else {
      iVar5 = param_1[0x65];
      iVar4 = *(int *)(iVar5 + 0x14) + 1;
    }
    *(int *)(iVar5 + 0x14) = iVar4;
    puVar2[1] = iVar7;
    *puVar2 = pbVar6;
  } while( true );
}

