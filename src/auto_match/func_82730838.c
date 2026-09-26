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
extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_8269D300();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_82700248();
extern int fn_8272DC58();
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_68;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;


undefined8 fn_82730838(int *param_1,int *param_2,uint *param_3)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined4 uVar4;
  longlong lVar5;
  char cVar8;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined1 auStack_70 [8];
  undefined4 uStack_68;
  undefined1 auStack_60 [8];
  undefined4 uStack_58;
  undefined1 auStack_50 [8];
  uint uStack_48;
  
  if (((((*param_3 & 0x20) == 0) && (lVar5 = (**(code **)(*param_1 + 0x40))(), lVar5 != 0)) &&
      (cVar8 = fn_8269D300(lVar5,param_1), cVar8 != '\0')) &&
     ((iVar7 = *param_2, iVar7 == 0x40 || (iVar7 == 0x80)))) {
    if ((*(int *)(param_1[0x28] + 0x114) != 0) &&
       ((uVar3 = *(ushort *)(*(int *)(param_1[0x28] + 0x114) + 0x68), (uVar3 & 1) == 0 ||
        ((uVar3 >> 1 & 1) != 0)))) {
      bVar1 = *(byte *)((int)param_2 + 0xd);
      sVar2 = *(short *)(param_2 + 2);
      uStack_80 = 0;
      uStack_7c = 0;
      uStack_78 = 0;
      if (iVar7 == 0x40) {
        uStack_68 = 0;
        auStack_70[0] = 4;
        fn_826CD420(&uStack_80,auStack_70);
        puVar6 = auStack_70;
      }
      else {
        auStack_60[0] = 4;
        uStack_58 = 1;
        fn_826CD420(&uStack_80,auStack_60);
        puVar6 = auStack_60;
      }
      fn_82696330(puVar6);
      auStack_50[0] = 4;
      uStack_48 = (uint)bVar1 << 0x10 | (int)sVar2;
      fn_826CD420(&uStack_80,auStack_50);
      fn_82696330(auStack_50);
      iVar7 = fn_82700248(lVar5 + 0xa2c,4);
      *(undefined4 *)(iVar7 + 4) = 4;
      param_1[1] = param_1[1] + 1;
      if (*(int *)(iVar7 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar7 + 8) = param_1;
      if (*(int *)(iVar7 + 0xc) != 0) {
        fn_8267C498();
      }
      *(undefined4 *)(iVar7 + 0xc) = 0;
      *(code **)(iVar7 + 0x2c) = fn_8272DC58;
      fn_826CD840(iVar7 + 0x30,&uStack_80);
      uVar4 = uStack_80;
      fn_8269A990(uStack_80,uStack_7c);
      fn_8267BE38(uVar4);
    }
    *param_3 = *param_3 | 0x20;
    return 1;
  }
  return 0;
}

