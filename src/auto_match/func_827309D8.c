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
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_82700248();
extern int fn_8272DC58();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


undefined8 fn_827309D8(int *param_1,undefined4 param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  longlong lVar3;
  int iVar4;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  undefined4 uStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  lVar3 = (**(code **)(*param_1 + 0x40))();
  if ((lVar3 != 0) && (*(int *)(param_1[0x28] + 0x114) != 0)) {
    uVar1 = *(ushort *)(*(int *)(param_1[0x28] + 0x114) + 0x68);
    if (((uVar1 & 1) == 0) || ((uVar1 >> 1 & 1) != 0)) {
      uStack_60 = 0;
      uStack_5c = 0;
      uStack_58 = 0;
      auStack_50[0] = 4;
      uStack_48 = 2;
      fn_826CD420(&uStack_60,auStack_50);
      fn_82696330(auStack_50);
      auStack_40[0] = 4;
      uStack_38 = param_2;
      fn_826CD420(&uStack_60,auStack_40);
      fn_82696330(auStack_40);
      iVar4 = fn_82700248(lVar3 + 0xa2c,4);
      *(undefined4 *)(iVar4 + 4) = 4;
      param_1[1] = param_1[1] + 1;
      if (*(int *)(iVar4 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar4 + 8) = param_1;
      if (*(int *)(iVar4 + 0xc) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar4 + 0xc) = 0;
      *(code **)(iVar4 + 0x2c) = fn_8272DC58;
      fn_826CD840(iVar4 + 0x30,&uStack_60);
      uVar2 = uStack_60;
      fn_8269A990(uStack_60,uStack_5c);
      fn_8267BE38(uVar2);
    }
  }
  return 1;
}

