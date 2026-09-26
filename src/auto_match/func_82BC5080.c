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
extern int fn_82B7BD28();
extern int fn_82BA03B8();
extern int fn_82BC0088();
extern int fn_82BC5A28();
extern int fn_82BC6DC0();
extern int fn_82BC7368();


void fn_82BC5080(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  *(int *)(param_1[8] + 0x864) = *(int *)(param_1[8] + 0x864) + 1;
  uVar1 = *(undefined4 *)(param_1[9] + 0x5b0);
  puVar3 = (undefined4 *)fn_82B7BD28(uVar1,0x14);
  puVar7 = puVar3 + 1;
  *puVar3 = uVar1;
  if (puVar7 == (undefined4 *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    fn_82BA03B8(puVar7,*(undefined4 *)(param_1[9] + 0x5b0));
  }
  *(undefined4 *)(param_2 + 0x48) = 1;
  *(undefined4 *)(*param_1 + 4) = 0;
  *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[6]) = param_2;
  piVar4 = (int *)fn_82BC0088(puVar7,puVar7[1]);
  *piVar4 = param_2;
  iVar6 = 2;
  *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[1]) = *(int *)(param_2 + 0x48);
  iVar5 = *(int *)(param_2 + 0x48);
  do {
    *(int *)(iVar5 * 4 + param_1[4]) = iVar5;
    iVar5 = param_2;
    while( true ) {
      param_2 = fn_82BC5A28(iVar5,*(undefined4 *)(param_1[8] + 0x864));
      if (param_2 != 0) break;
      if (puVar7[1] == 0) {
        fn_82BC6DC0(puVar7,1);
        return;
      }
      iVar5 = fn_82BC7368();
    }
    piVar4 = (int *)fn_82BC0088(puVar7,puVar7[1]);
    *piVar4 = param_2;
    *(int *)(param_2 + 0x48) = iVar6;
    iVar2 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(iVar2 + *param_1) = *(undefined4 *)(iVar5 + 0x48);
    *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[6]) = param_2;
    *(undefined4 *)(param_2 + 0x80) = *(undefined4 *)(param_1[8] + 0x864);
    *(int *)(*(int *)(param_2 + 0x48) * 4 + param_1[1]) = *(int *)(param_2 + 0x48);
    iVar5 = *(int *)(param_2 + 0x48);
  } while( true );
}

