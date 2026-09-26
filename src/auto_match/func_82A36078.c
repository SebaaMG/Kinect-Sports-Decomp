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
extern unsigned int *auStack_80;
extern int fn_82A2AAA8();
extern int fn_82A2B418();
extern unsigned int uStack_8a;
extern unsigned int uStack_8e;
extern unsigned int uStack_92;


undefined8 fn_82A36078(short *param_1,longlong *param_2,longlong *param_3,char param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  bool bVar4;
  int iVar5;
  char cVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  longlong alStack_b0 [2];
  short sStack_a0;
  short sStack_9e;
  short sStack_9c;
  short sStack_9a;
  short sStack_98;
  short sStack_96;
  short sStack_94;
  undefined2 uStack_92;
  short sStack_90;
  ushort uStack_8e;
  ushort uStack_8a;
  undefined1 auStack_80 [4];
  short sStack_7c;
  short sStack_72;
  
  fn_82A2AAA8(param_3,&sStack_90);
  if (*param_1 == 0) {
    sVar1 = param_1[3];
    if ((sVar1 < 6) && (sVar1 != 0)) {
      sVar2 = param_1[1];
      sVar3 = param_1[2];
      bVar4 = false;
      sVar8 = sStack_90;
      if (param_4 == '\0') {
        if ((int)sVar2 < (int)(uint)uStack_8e) {
          sVar8 = sStack_90 + 1;
        }
        else if ((int)sVar2 <= (int)(uint)uStack_8e) {
          bVar4 = true;
        }
      }
      sStack_9a = param_1[4];
      sStack_98 = param_1[5];
      sStack_96 = param_1[6];
      sStack_94 = param_1[7];
      sStack_9c = 1;
      uStack_92 = 0;
      sStack_a0 = sVar8;
      sStack_9e = sVar2;
      cVar6 = RtlTimeFieldsToTime(&sStack_a0,alStack_b0);
      while (cVar6 != '\0') {
        RtlTimeToTimeFields(alStack_b0,auStack_80);
        if (sVar3 < sStack_72) {
          sStack_9c = (sVar3 - sStack_72) + sStack_9c + 7;
        }
        else if (sStack_72 < sVar3) {
          sStack_9c = (sVar3 - sStack_72) + sStack_9c;
        }
        sVar7 = 1;
        sVar9 = sStack_9c;
        if (1 < sVar1) {
          do {
            sStack_9c = sStack_9c + 7;
            cVar6 = RtlTimeFieldsToTime(&sStack_a0,alStack_b0);
            if (cVar6 == '\0') break;
            RtlTimeToTimeFields(alStack_b0,auStack_80);
            sVar7 = sVar7 + 1;
            sVar9 = sStack_7c;
          } while (sVar7 < sVar1);
        }
        sStack_9c = sVar9;
        cVar6 = RtlTimeFieldsToTime(&sStack_a0,alStack_b0);
        if (cVar6 == '\0') {
          return 0;
        }
        if ((!bVar4) ||
           (((int)(uint)uStack_8a <= (int)sStack_9c &&
            (((int)sStack_9c != (uint)uStack_8a || (*param_3 <= alStack_b0[0])))))) {
          *param_2 = alStack_b0[0];
          return 1;
        }
        sVar8 = sVar8 + 1;
        sStack_98 = param_1[5];
        sStack_96 = param_1[6];
        sStack_9a = param_1[4];
        sStack_94 = param_1[7];
        bVar4 = false;
        sStack_9c = 1;
        uStack_92 = 0;
        sStack_a0 = sVar8;
        sStack_9e = sVar2;
        cVar6 = RtlTimeFieldsToTime(&sStack_a0,alStack_b0);
      }
    }
  }
  else {
    iVar5 = fn_82A2B418(param_1,param_2);
    if ((iVar5 != 0) && (*param_3 <= *param_2)) {
      return 1;
    }
  }
  return 0;
}

