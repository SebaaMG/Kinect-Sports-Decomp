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
extern int fn_82FB1A08();
extern int fn_83034FA0();
extern int fn_83035128();
extern int fn_83035218();
extern int fn_83035DB8();


undefined8 fn_83035EC0(int param_1,int *param_2,int *param_3)

{
  undefined4 uVar1;
  float *pfVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined8 uVar7;
  uint uVar8;
  
  *param_2 = *param_2 + 4;
  uVar7 = fn_83035128();
  if ((int)uVar7 == 1) {
    uVar1 = *(undefined4 *)*param_2;
    *param_2 = (int)((undefined4 *)*param_2 + 1);
    uVar7 = fn_83035218(param_1,uVar1);
    if ((int)uVar7 == 1) {
      pfVar2 = (float *)*param_2;
      *param_2 = (int)(pfVar2 + 1);
      fVar3 = *pfVar2;
      if (*(float *)(param_1 + 0x28) != fVar3) {
        *(float *)(param_1 + 0x28) = fVar3;
        fn_83034FA0(param_1);
      }
      uVar4 = *(uint *)*param_2;
      *param_2 = (int)((uint *)*param_2 + 1);
      if (((uVar4 != 0) && (uVar7 = fn_82FB1A08(param_1 + 0x10,uVar4), (int)uVar7 == 1)) &&
         (uVar8 = 0, uVar4 != 0)) {
        do {
          puVar5 = (undefined4 *)*param_2;
          uVar1 = *puVar5;
          *param_2 = (int)(puVar5 + 1);
          iVar6 = puVar5[1];
          *param_2 = (int)(puVar5 + 2);
          uVar7 = fn_83035DB8(param_1,uVar1,puVar5 + 2,iVar6);
          if ((int)uVar7 != 1) {
            return uVar7;
          }
          uVar8 = uVar8 + 1;
          *param_2 = *param_2 + iVar6 * 0xc;
          *param_3 = *param_3 + iVar6 * -0xc;
        } while (uVar8 < uVar4);
      }
    }
  }
  return uVar7;
}

