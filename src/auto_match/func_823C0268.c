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
extern int fn_8229B0E0();
extern int fn_8229F5A8();
extern int fn_8229F618();
extern int fn_822B3128();
extern int fn_822B3488();
extern int fn_82308E08();
extern int fn_823588D0();
extern int fn_82359420();
extern int fn_823688D0();
extern int fn_82369A80();
extern int fn_8236AE80();
extern int fn_823C0720();
extern int fn_823C09D0();
extern int fn_823C4DD0();
extern int fn_823C4E58();
extern int fn_823CC100();
extern int fn_823CC298();
extern int fn_823D16A0();
extern int fn_823D1978();
extern int fn_823D4908();
extern int fn_823D6088();
extern int fn_824C8210();
extern int fn_82508078();
extern int fn_82512C30();
extern unsigned int lbl_82193B00;
extern unsigned int lbl_821CC160;


int fn_823C0268(double param_1,int *param_2)

{
  int *piVar1;
  char cVar4;
  int iVar2;
  int iVar3;
  longlong lVar5;
  bool bVar6;
  double dVar7;
  undefined1 auStack_50 [80];
  
  piVar1 = (int *)fn_82512C30();
  if (*piVar1 != 0) goto LAB_823c0688;
  iVar3 = param_2[0x122];
  cVar4 = fn_82308E08(param_2 + 0x332);
  dVar7 = (double)lbl_821CC160;
  if (cVar4 == '\0') {
    if (param_2[0x381] == 0) {
      if (*(int *)(*(int *)(param_2[0x35] + 0x18) + 0xc) == 0) {
        if ((int *)param_2[0x21] == (int *)0x0) {
          bVar6 = true;
        }
        else {
          iVar3 = (**(code **)(*(int *)param_2[0x21] + 8))();
          cVar4 = (**(code **)(*(int *)(iVar3 + 0x9c) + 0x3c))();
          bVar6 = cVar4 != '\0';
        }
        if (bVar6) {
          if (param_2[0x382] < 1) {
            if (param_2[0x130] == 0) {
              param_2[0x409] = lbl_82193B00;
              param_2[0x40a] = 2;
            }
            else {
              cVar4 = *(char *)(param_2[0x130] + 0x148);
              if (cVar4 == '\x01') {
                fn_823D4908(param_2[0x388]);
              }
              else if (cVar4 == '\x02') {
                piVar1 = (int *)param_2[0x388];
                fn_8229F5A8(*(undefined4 *)
                                   (*(int *)(**(int **)(*piVar1 + 0x4b0) + 0xd4) + 0xc));
                iVar3 = *piVar1;
                *(float *)(iVar3 + 0x1024) = (float)dVar7;
                *(undefined4 *)(iVar3 + 0x1028) = 2;
                fn_823C4DD0();
                fn_823CC298(*(undefined4 *)(*piVar1 + 0x4b8),7);
              }
            }
            param_2[0x381] = 1;
            *(undefined4 *)(param_2[0x24] + 0x510) = 1;
          }
          param_2[0x382] = param_2[0x382] + -1;
          goto LAB_823c0444;
        }
      }
      param_2[0x382] = 1;
    }
    else {
      iVar2 = fn_823C0720(param_1,param_2);
      if (iVar2 == 0) {
        if ((iVar3 == 0) && (param_2[0x122] != 0)) {
          if (param_2[0x130] == 0) {
            fn_82508078(param_2[0x29],0xffffffff821b5f48,0);
          }
          fn_823CC298(param_2[0x12e],0x1e);
        }
      }
      else {
        fn_823D16A0(param_2);
      }
    }
  }
  else {
    fn_823D6088(param_2 + 0x27e);
  }
LAB_823c0444:
  if (param_2[0x130] == 0) {
    fn_8229B0E0(*(undefined4 *)(*(int *)param_2[300] + 0xd4));
  }
  fn_8236AE80(param_2);
  fn_823C09D0(param_1);
  fn_823588D0(param_1,param_2);
  if (param_2[0x268] == 0) {
    if ((double)(float)param_2[0x3bd] != dVar7) {
      param_2[0x3bd] = (int)(float)dVar7;
      fn_823CC298(param_2[0x12e],0x20);
    }
  }
  else {
    param_2[0x3bd] = (int)(float)((double)(float)param_2[0x3bd] + param_1);
  }
  if (param_2[900] != 0) {
    fn_82369A80(param_2);
  }
  if (param_2[0x388] != 0) {
    piVar1 = param_2 + 0x385;
    lVar5 = 3;
    do {
      if ((*piVar1 != param_2[900]) && (*piVar1 != 0)) {
        fn_82369A80(param_2);
      }
      lVar5 = lVar5 + -1;
      piVar1 = piVar1 + 1;
    } while (lVar5 != 0);
  }
  if (param_2[0x26c] != -1) {
    iVar3 = param_2[0x26c] * 0x84 + param_2[0x12f];
    *(float *)(iVar3 + 100) = (float)((double)*(float *)(iVar3 + 100) + param_1);
  }
  fn_822B3488(dVar7,auStack_50,*(undefined4 *)(param_2[7] + 4));
  fn_824C8210(param_2[0x2a]);
  fn_822B3128(auStack_50,*(undefined4 *)(param_2[7] + 4));
  fn_823CC100(param_1,param_2[0x12e]);
  fn_82359420(param_1,param_2,param_2[0x3f8]);
  iVar3 = (**(code **)(*param_2 + 0x98))(param_2,1);
  if (iVar3 != 0) {
    *(undefined4 *)(param_2[300] + 0xe0) = 0;
    (**(code **)(*param_2 + 0x90))(param_2,0);
  }
  if (param_2[899] == 2) {
    fn_8229F618(*(undefined4 *)(*(int *)(*(int *)param_2[300] + 0xd4) + 0xc));
    *(undefined4 *)(param_2[0x24] + 0x510) = 0;
    fn_823688D0(param_2);
  }
  iVar3 = fn_823C4E58(param_2);
  param_2[0x352] = iVar3;
  *(undefined1 *)(param_2 + 0x361) = 0;
  if (param_2[0x378] != -1) {
    param_2[0x37a] = (int)(float)((double)(float)param_2[0x37a] + param_1);
  }
  param_2[0x10a] = (int)(float)((double)(float)param_2[0x10a] + param_1);
  fn_823D1978(param_1,param_2);
LAB_823c0688:
  return param_2[899];
}

