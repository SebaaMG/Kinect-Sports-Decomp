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
#define NAN(x) ((x) != (x))
extern int fn_82547FB8();
extern int fn_8263B758();
extern int fn_82837D98();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_82195598;
extern unsigned int lbl_821CC160;
extern unsigned int uStack_44;
extern unsigned int uStack_48;


undefined8 fn_825D16E8(float *param_1,float *param_2,int param_3,undefined8 param_4)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong alStack_70;
  int aiStack_60 [6];
  uint uStack_48;
  uint uStack_44;
  
  fn_82837D98(*(undefined4 *)(param_3 + 0x14),0,&alStack_70);
  fn_8263B758(((uint)((ulonglong)(alStack_70) >> 32)),0,aiStack_60);
  uVar7 = (uint)(float)(longlong)((double)(*param_2 * (float)uStack_48) + lbl_82195598);
  uVar1 = (uint)(float)(longlong)((double)(*param_1 * (float)uStack_48) - lbl_82195598);
  if ((int)uStack_48 <= (int)uVar7) {
    uVar7 = uStack_48;
  }
  fVar3 = (float)uStack_44;
  fVar4 = (float)(longlong)((double)(param_2[1] * fVar3) + lbl_82195598);
  fVar2 = fVar4 - fVar3;
  uVar9 = (ulonglong)(uint)(int)(float)(longlong)((double)(param_1[1] * fVar3) - lbl_82195598);
  if (*(float *)(&lbl_821954D8 +
                ((uint)(byte)((fVar2 < lbl_821CC160) << 2) |
                (uint)(NAN(fVar2) || NAN(lbl_821CC160)) << 2)) < 0.0) {
    fVar3 = fVar4;
  }
  alStack_70 = (longlong)(int)fVar3;
  do {
    uVar8 = (ulonglong)uVar1;
    uVar5 = uVar1;
    if ((int)fVar3 <= (int)uVar9) {
      return 0;
    }
    while ((int)uVar5 < (int)uVar7) {
      if (aiStack_60[0] == 0x1a200154) {
        cVar6 = fn_82547FB8(param_4,uStack_48,uVar8,uVar9);
        bVar10 = cVar6 != '\0';
      }
      else {
        bVar10 = false;
      }
      if (bVar10) {
        return 1;
      }
      uVar8 = uVar8 + 1;
      uVar5 = (uint)uVar8;
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

