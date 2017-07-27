// 3D
// const double coPlanerThreshold = 0.7; // Some threshold value that is application dependent
// const double lengthErrorThreshold = 1e-3;
//
// bool intersection(Ray ray, LineSegment segment)
// {
// 	Vector3 da = ray.End - ray.Origin;	// Unnormalized direction of the ray
// 	Vector3 db = segment.End - segment.Start;
// 	Vector3 dc = segment.Start - ray.Origin;
//
// 	if (Math.Abs(dc.Dot(da.Cross(db))) >= coPlanerThreshold) // Lines are not coplanar
// 		return false;
//
// 	double s = dc.Cross(db).Dot(da.Cross(db)) / da.Cross(db).LengthSquared;
//
// 	if (s >= 0.0 && s <= 1.0)	// Means we have an intersection
// 	{
// 		Vector3 intersection = ray.Origin + s * da;
//
// 		// See if this lies on the segment
// 		if ((intersection - segment.Start).LengthSquared + (intersection - segment.End).LengthSquared <=
// segment.LengthSquared + lengthErrorThreshold)
// 		return true;
// 	}
//
// 	return false;
// }
